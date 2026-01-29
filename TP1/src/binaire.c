#include <stdio.h>

int main() {
    // Liste des nombres à tester demandés dans la consigne
    // J'utilise un tableau pour éviter de copier-coller le code 5 fois
    int tests[] = {0, 4096, 65536, 65535, 1024};
    
    // Calcul automatique du nombre d'éléments dans le tableau
    int nombre_de_tests = sizeof(tests) / sizeof(tests[0]);

    int i, j;

    // Boucle pour traiter chaque nombre du tableau
    for (i = 0; i < nombre_de_tests; i++) {
        int nombre = tests[i];
        
        printf("Nombre : %8d | Binaire : ", nombre);

        // --- DÉBUT DE LA CONVERSION BINAIRE ---
        
        // Un entier (int) standard fait 32 bits.
        // On boucle de 31 (le bit de poids fort, à gauche) jusqu'à 0 (à droite).
        for (j = 31; j >= 0; j--) {
            
            // 1. Décalage : on déplace le bit numéro 'j' vers la position 0
            // Exemple : si on veut lire le bit 3, on décale tout de 3 crans vers la droite.
            int decalage = nombre >> j;
            
            // 2. Masquage : on regarde seulement le dernier bit
            // (nombre & 1) est strictement équivalent à (nombre % 2)
            int bit = decalage & 1;

            // 3. Affichage
            if (bit == 1) {
                printf("1");
            } else {
                printf("0");
            }

            // (Optionnel) Ajout d'un espace tous les 8 bits pour la lisibilité
            if (j % 8 == 0 && j != 0) {
                printf(" ");
            }
        }
        
        // --- FIN DE LA CONVERSION ---
        
        printf("\n"); // Retour à la ligne pour le prochain nombre
    }

    return 0;
}
