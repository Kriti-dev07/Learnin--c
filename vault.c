#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>      // for getch() on Windows
#include <windows.h>    // for Sleep()

#define MAX_ENTRIES 100
#define MAX_KEY 50
#define MAX_VALUE 100
#define VAULT_FILE "vault.dat"
#define MASTER_PASSWORD "root123"  // you can change this

struct Entry {
    char key[MAX_KEY];
    char value[MAX_VALUE];
};

struct Entry vault[MAX_ENTRIES];
int count = 0;

// Simple XOR encryption
void encryptDecrypt(char *data) {
    char key = 'K';  // XOR key
    for (int i = 0; data[i] != '\0'; i++) {
        data[i] ^= key;
    }
}

// Input with masking
void getPassword(char *pass) {
    int i = 0;
    char ch;
    while ((ch = _getch()) != 13 && i < 19) {
        if (ch == 8 && i > 0) {
            printf("\b \b");
            i--;
        } else if (ch != 8) {
            pass[i++] = ch;
            printf("*");
        }
    }
    pass[i] = '\0';
    printf("\n");
}

void saveVault() {
    FILE *fp = fopen(VAULT_FILE, "wb");
    if (!fp) {
        printf("Error saving file.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        encryptDecrypt(vault[i].key);
        encryptDecrypt(vault[i].value);
        fwrite(&vault[i], sizeof(struct Entry), 1, fp);
        encryptDecrypt(vault[i].key);   // revert back
        encryptDecrypt(vault[i].value);
    }

    fclose(fp);
    printf("Vault saved.\n");
}

void loadVault() {
    FILE *fp = fopen(VAULT_FILE, "rb");
    if (!fp) return;

    while (fread(&vault[count], sizeof(struct Entry), 1, fp) == 1) {
        encryptDecrypt(vault[count].key);
        encryptDecrypt(vault[count].value);
        count++;
    }

    fclose(fp);
}

void addEntry() {
    if (count >= MAX_ENTRIES) {
        printf("Vault full.\n");
        return;
    }

    printf("Enter key: ");
    fflush(stdin);
    fgets(vault[count].key, MAX_KEY, stdin);
    vault[count].key[strcspn(vault[count].key, "\n")] = '\0';

    printf("Enter value: ");
    fgets(vault[count].value, MAX_VALUE, stdin);
    vault[count].value[strcspn(vault[count].value, "\n")] = '\0';

    count++;
    printf("Entry added!\n");
}

void viewVault() {
    char reauth[20];
    printf("Re-enter password to unlock vault: ");
    getPassword(reauth);

    if (strcmp(reauth, MASTER_PASSWORD) != 0) {
        printf("Access Denied.\n");
        return;
    }

    printf("\n--- Vault Entries ---\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s -> %s\n", i + 1, vault[i].key, vault[i].value);
    }
}

void searchVault() {
    char searchKey[MAX_KEY];
    printf("Enter key to search: ");
    fflush(stdin);
    fgets(searchKey, MAX_KEY, stdin);
    searchKey[strcspn(searchKey, "\n")] = '\0';

    for (int i = 0; i < count; i++) {
        if (strcmp(vault[i].key, searchKey) == 0) {
            printf("Found: %s -> %s\n", vault[i].key, vault[i].value);
            return;
        }
    }

    printf("Key not found.\n");
}

void deleteEntry() {
    char delKey[MAX_KEY];
    printf("Enter key to delete: ");
    fflush(stdin);
    fgets(delKey, MAX_KEY, stdin);
    delKey[strcspn(delKey, "\n")] = '\0';

    for (int i = 0; i < count; i++) {
        if (strcmp(vault[i].key, delKey) == 0) {
            for (int j = i; j < count - 1; j++) {
                vault[j] = vault[j + 1];
            }
            count--;
            printf("Entry deleted.\n");
            return;
        }
    }

    printf("Key not found.\n");
}

void slowPrint(const char *text) {
    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c", text[i]);
        Sleep(20); // typing effect
    }
}

int main() {
    char password[20];

    loadVault();

    slowPrint("Enter Vault Password: ");
    getPassword(password);

    if (strcmp(password, MASTER_PASSWORD) != 0) {
        printf("Incorrect password. Exiting...\n");
        return 1;
    }

    int choice;
    do {
        printf("\n--- Secure Vault Menu ---\n");
        printf("1. Add Entry\n");
        printf("2. View Vault\n");
        printf("3. Search Entry\n");
        printf("4. Delete Entry\n");
        printf("5. Save & Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEntry(); break;
            case 2: viewVault(); break;
            case 3: searchVault(); break;
            case 4: deleteEntry(); break;
            case 5: saveVault(); break;
            default: printf("Invalid option.\n");
        }

    } while (choice != 5);

    return 0;
}