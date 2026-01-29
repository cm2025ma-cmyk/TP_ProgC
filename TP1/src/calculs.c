#include <stdio.h>

int main() {
    // 1. Déclaration et initialisation des variables
    // Changez ces valeurs pour tester votre programme !
    int num1 = 12;
    int num2 = 5;
    char op = '&'; // Essayez: '+', '-', '*', '/', '%', '&', '|', '~'

    printf("Opération demandée : %d %c %d\n", num1, op, num2);
    printf("-----------------------------\n");

    // 2. La structure switch
    switch (op) {
        case '+':
            printf("Addition : %d\n", num1 + num2);
            break; // INDISPENSABLE pour ne pas exécuter le cas suivant

        case '-':
            printf("Soustraction : %d\n", num1 - num2);
            break;

        case '*':
            printf("Multiplication : %d\n", num1 * num2);
            break;

        case '/':
            // Petite sécurité pour éviter la division par zéro
            if (num2 == 0) {
                printf("Erreur : Division par zéro impossible !\n");
            } else {
                printf("Division entière : %d\n", num1 / num2);
            }
            break;

        case '%':
            if (num2 == 0) {
                printf("Erreur : Modulo par zéro impossible !\n");
            } else {
                printf("Modulo (Reste) : %d\n", num1 % num2);
            }
            break;

        case '&':
            printf("ET Bit-à-bit (AND) : %d\n", num1 & num2);
            break;

        case '|':
            printf("OU Bit-à-bit (OR) : %d\n", num1 | num2);
            break;

        case '~':
            // Attention : ~ est un opérateur "unaire" (il ne prend qu'un seul nombre)
            // Il inverse tous les bits de num1
            printf("NON Bit-à-bit (NOT) sur num1 : %d\n", ~num1);
            printf("NON Bit-à-bit (NOT) sur num2 : %d\n", ~num2);
            break;

        default:
            // Ce bloc s'exécute si 'op' ne correspond à aucun 'case'
            printf("Erreur : L'opérateur '%c' n'est pas reconnu.\n", op);
            break;
    }

    return 0;
}
