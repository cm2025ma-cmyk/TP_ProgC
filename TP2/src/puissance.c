#include <stdio.h> // 1. Orthographe et chevrons
// #include <math.h> // Pas besoin ici car on fait le calcul à la main

int main() { // 2. Tout le code va dans le main
    int a = 2;
    int b = 9;
    
    // 3. IMPORTANT : On commence à 1 pour une multiplication
    // Si on commence à 0, le résultat restera toujours 0 !
    int resultat = 1; 
    
    int i;

    for (i = 0; i < b; i++) {
        // 4. On multiplie le résultat précédent par a
        // Tour 1 : 1 * 2 = 2
        // Tour 2 : 2 * 2 = 4
        // Tour 3 : 4 * 2 = 8 ... etc
        resultat = resultat * a; 
        // Note : on peut aussi écrire "resultat *= a;"
    }

    // 5. Formatage correct pour l'affichage
    printf("Le résultat de %d puissance %d est : %d\n", a, b, resultat);

    return 0;
}
