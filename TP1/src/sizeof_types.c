#include <stdio.h>

int main() {
    // --- 1. Les types entiers (avec versions signed et unsigned) ---
    
    // CHAR (Caractère)
    printf("--- CHAR ---\n");
    printf("Taille de signed char      : %zu octet(s)\n", sizeof(signed char));
    printf("Taille de unsigned char    : %zu octet(s)\n", sizeof(unsigned char));

    // SHORT (Entier court)
    printf("\n--- SHORT ---\n");
    printf("Taille de short            : %zu octet(s)\n", sizeof(short));
    printf("Taille de unsigned short   : %zu octet(s)\n", sizeof(unsigned short));

    // INT (Entier standard)
    printf("\n--- INT ---\n");
    printf("Taille de int              : %zu octet(s)\n", sizeof(int));
    printf("Taille de unsigned int     : %zu octet(s)\n", sizeof(unsigned int));

    // LONG INT (Entier long)
    printf("\n--- LONG INT ---\n");
    printf("Taille de long int         : %zu octet(s)\n", sizeof(long int));
    printf("Taille de unsigned long int: %zu octet(s)\n", sizeof(unsigned long int));

    // LONG LONG INT (Entier très long)
    printf("\n--- LONG LONG INT ---\n");
    printf("Taille de long long int         : %zu octet(s)\n", sizeof(long long int));
    printf("Taille de unsigned long long int: %zu octet(s)\n", sizeof(unsigned long long int));


    // --- 2. Les types flottants (Pas de unsigned) ---

    printf("\n--- FLOTTANTS ---\n");
    
    // FLOAT
    printf("Taille de float            : %zu octet(s)\n", sizeof(float));

    // DOUBLE
    printf("Taille de double           : %zu octet(s)\n", sizeof(double));

    // LONG DOUBLE
    printf("Taille de long double      : %zu octet(s)\n", sizeof(long double));

    return 0;
}

