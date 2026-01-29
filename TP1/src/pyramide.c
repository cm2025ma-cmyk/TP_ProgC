#include <stdio.h>

int main() {
    // 1. Déclaration et Initialisation
    int n = 5; // Hauteur de la pyramide
    int i, j;  // Variables pour les compteurs des boucles

    // 2. Boucle principale : gère les lignes (niveaux) de 1 à n
    for (i = 1; i <= n; i++) {
        
        // --- ÉTAPE A : Les Espaces ---
        // Pour centrer, on affiche (n - i) espaces.
        // Exemple : si n=5 et qu'on est à la ligne i=1, il faut 4 espaces.
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // --- ÉTAPE B : La Montée (1 -> i) ---
        // On affiche les nombres croissants jusqu'au numéro de la ligne actuelle
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // --- ÉTAPE C : La Descente (i-1 -> 1) ---
        // On affiche les nombres décroissants.
        // On commence à (i - 1) pour ne pas répéter le sommet (le chiffre du milieu).
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Fin de la ligne : on passe à la suivante
        printf("\n");
    }

    // 3. Terminaison
    printf("Génération de la pyramide terminée.\n");

    return 0;
}
