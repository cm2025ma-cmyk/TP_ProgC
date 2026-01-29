#include <stdio.h>

int main() {
    int i, k;
    int compteur = 10; 
    for (i = 0; i < compteur; i++) {
        for (k = 0; k < i; k++) {
            if (k == 0 || i == compteur - 1 || k == i - 1) {
                printf("*");
            } else {
                printf("#"); 
            }
        }
        printf("\n"); 
    }
    
    return 0;
}
