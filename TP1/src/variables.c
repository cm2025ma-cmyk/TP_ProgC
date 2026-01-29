#include <stdio.h>

int main() {
    // --- 1. CHAR (Caractères et petits entiers) ---
    signed char c_signe = 'A';
    unsigned char c_non_signe = 200; 

    printf("--- CHAR ---\n");
    printf("Signed char (lettre)   : %c (valeur num: %d)\n", c_signe, c_signe);
    printf("Unsigned char (valeur) : %u\n", c_non_signe);

    // --- 2. SHORT (Entiers courts) ---
    short s_signe = -12345;
    unsigned short s_non_signe = 60000;

    printf("\n--- SHORT ---\n");
    printf("Signed short           : %hd\n", s_signe);
    printf("Unsigned short         : %hu\n", s_non_signe);

    // --- 3. INT (Entiers standards) ---
    int i_signe = -1000000;
    unsigned int i_non_signe = 3000000000U; 

    printf("\n--- INT ---\n");
    printf("Signed int             : %d\n", i_signe);
    printf("Unsigned int           : %u\n", i_non_signe);

    // --- 4. LONG INT (Entiers longs) ---
    long int l_signe = -1234567890L; 
    unsigned long int l_non_signe = 4000000000UL;

    printf("\n--- LONG INT ---\n");
    printf("Signed long            : %ld\n", l_signe);
    printf("Unsigned long          : %lu\n", l_non_signe);

    // --- 5. LONG LONG INT (Entiers très longs) ---
    long long int ll_signe = -9000000000000000000LL; 
    unsigned long long int ll_non_signe = 18000000000000000000ULL; 

    printf("\n--- LONG LONG INT ---\n");
    printf("Signed long long       : %lld\n", ll_signe);
    printf("Unsigned long long     : %llu\n", ll_non_signe);

    // --- 6, 7, 8. FLOTTANTS (Nombres à virgule) ---
    float f = 3.141592f; 
    double d = 3.141592653589793;
    long double ld = 3.141592653589793238462643L; 

    printf("\n--- FLOTTANTS ---\n");
    printf("Float                  : %.10f\n", f);
    printf("Double                 : %.15lf\n", d);
    printf("Long Double            : %.18Lf\n", ld); 

    return 0;
}
