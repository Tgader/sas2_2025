#include <stdio.h>
#include <stdlib.h>
int main(){
int tableau[ ] = {1,2,3,4,5};
int taille = sizeof(tableau) / sizeof(tableau[0]);
 printf("Les valeurs du tableau sont :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d\n", tableau[i]);
    }
            return 0;
        }
