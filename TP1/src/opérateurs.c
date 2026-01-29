#include <stdio.h>
#include <stdbool.h> // 1. Obligatoire pour utiliser "bool"

// 2. La fonction doit être définie AVANT le main (ou déclarée en haut)
bool sont_egaux(int a, int b) {
    return (a == b);
}

int main() {
    int a = 5;
    int b = 10;

    printf("Le resultat est %d\n", a + b);
    printf("Le résultat de la SOUSTRACTION est %d\n", b - a);
    printf("Le résultat de la Multiplication est %d\n", a * b);
    
    // Attention : division entière (5/10 donne 0)
    printf("Le résultat de la division entière est %d\n", a / b); 
    
    // Astuce : Pour avoir 0.5, il faut transformer un nombre en float
    printf("Le résultat de la division précise est %.1f\n", (float)a / b);

    printf("Le reste de la division (modulo) est %d\n", a % b);

    // 3. Testons votre fonction booléenne
    if (sont_egaux(a, b)) {
        printf("Verdict : a et b sont égaux !\n");
    } else {
        printf("Verdict : a et b sont différents !\n");
    }

    return 0;
}
