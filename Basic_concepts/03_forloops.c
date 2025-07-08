#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    if (n <= 0 || n > 10) {
        printf("Invalid. Enter a number between 1 to 10.\n");
        return 1;
    }

    printf("\nHere is your pattern:\n\n");

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
