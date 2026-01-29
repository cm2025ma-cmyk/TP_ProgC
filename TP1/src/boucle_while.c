#include <stdio.h>

int main() {
    int compteur = 10;
    
    // 1. Initialisation de la boucle externe
    int i = 0; 
    
    // Condition externe
    while (i < compteur) {
        
        // 2. Initialisation de la boucle interne
        // ATTENTION : Il faut remettre k à 0 à chaque nouvelle ligne !
        int k = 0; 
        
        // Condition interne (tant que k est plus petit que le numéro de la ligne)
        while (k < i) {
            
            // La logique reste exactement la même
            if (k == 0 || i == compteur - 1 || k == i - 1) {
                printf("*");
            } else {
                printf("#");
            }
            
            // 3. Incrémentation interne (ne surtout pas oublier !)
            k++;
        }
        
        printf("\n"); // Changement de ligne
        
        // 3. Incrémentation externe (ne surtout pas oublier !)
        i++;
    }

    return 0;
}
