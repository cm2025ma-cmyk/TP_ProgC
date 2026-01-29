#include <stdio.h> // 1. Chevrons et .h obligatoires

int main() {
    int i;
    int somme = 0;

    for (i = 0; i < 1000; i++) {
        
        // 2. LOGIQUE : On arrête si la somme DÉPASSE 5000
        if (somme > 5000) {
            break;
        }
        
        // 3. PRIORITÉ : On gère le continue d'abord ?
        // Si vous voulez ignorer les multiples de 11, il vaut mieux le mettre avant l'addition.
        if (i % 11 == 0) {
            continue; // Retourne au début de la boucle (passe au i suivant)
        }
        
        // 4. SYNTAXE : else if et || (pas elif / or)
        else if (i % 5 == 0 || i % 7 == 0) {
            somme += i; // somme = somme + i
        }
    }

    // On affiche le résultat pour vérifier
    printf("Somme finale : %d (dernier i ajouté : %d)\n", somme, i);

    return 0;
}
