#include <stdio.h>

int main() {
    // --- 1. CHAR (Caractères et petits entiers) ---
    // %c pour le caractère, %d pour sa valeur numérique
    signed char c_signe = 'A';
    unsigned char c_non_signe = 200; // 200 dépasse la capacité d'un signed char (-128 à 127)

    printf("--- CHAR ---\n");
    printf("Signed char (lettre)   : %c (valeur num: %d)\n", c_signe, c_signe);
    printf("Unsigned char (valeur) : %u\n", c_non_signe);


    // --- 2. SHORT (Entiers courts) ---
    // %hd pour short, %hu pour unsigned short
    short s_signe = -12345;
    unsigned short s_non_signe = 60000;

    printf("\n--- SHORT ---\n");
    printf("Signed short           : %hd\n", s_signe);
    printf("Unsigned short         : %hu\n", s_non_signe);


    // --- 3. INT (Entiers standards) ---
    // %d pour int, %u pour unsigned int
    int i_signe = -1000000;
    unsigned int i_non_signe = 3000000000U; // Le suffixe 'U' indique que c'est Unsigned

    printf("\n--- INT ---\n");
    printf("Signed int             : %d\n", i_signe);
    printf("Unsigned int           : %u\n", i_non_signe);


    // --- 4. LONG INT (Entiers longs) ---
    // %ld pour long, %lu pour unsigned long
    long int l_signe = -1234567890L; // Le suffixe 'L' indique Long
    unsigned long int l_non_signe = 4000000000UL;

    printf("\n--- LONG INT ---\n");
    printf("Signed long            : %ld\n", l_signe);
    printf("Unsigned long          : %lu\n", l_non_signe);
