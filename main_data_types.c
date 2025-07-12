#include <stdio.h>

int main() {
    // Integer types
    int i = -10;
    unsigned int ui = 10;
    short s = -100;
    unsigned short us = 100;
    long l = 100000L;
    unsigned long ul = 100000UL;
    long long ll = 10000000000LL;
    unsigned long long ull = 10000000000ULL;

    // Character types
    char c = 'A';
    unsigned char uc = 255;

    // Floating-point types
    float f = 3.14f;
    double d = 3.1415926535;
   

    printf("===== Integer Types =====\n");
    printf("int: %d (size: %zu bytes)\n", i, sizeof(i));
    printf("unsigned int: %u (size: %zu bytes)\n", ui, sizeof(ui));
    printf("short: %hd (size: %zu bytes)\n", s, sizeof(s));
    printf("unsigned short: %hu (size: %zu bytes)\n", us, sizeof(us));
    printf("long: %ld (size: %zu bytes)\n", l, sizeof(l));
    printf("unsigned long: %lu (size: %zu bytes)\n", ul, sizeof(ul));
    printf("long long: %lld (size: %zu bytes)\n", ll, sizeof(ll));
    printf("unsigned long long: %llu (size: %zu bytes)\n", ull, sizeof(ull));

    printf("\n===== Character Types =====\n");
    printf("char: %c (ASCII: %d) (size: %zu bytes)\n", c, c, sizeof(c));
    printf("unsigned char: %u (size: %zu bytes)\n", uc, sizeof(uc));

    printf("\n===== Floating Point Types =====\n");
    printf("float: %f (size: %zu bytes)\n", f, sizeof(f));
    printf("double: %lf (size: %zu bytes)\n", d, sizeof(d));
   
    return 0;
}