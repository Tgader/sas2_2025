#include <stdio.h>
#include <stdlib.h>

int main() {

int n;
int *tableau;
printf("entrer le nombre d'element du tableau :");
scanf("%d", &n);
if(n <= 0) {
   printf("Le nombre d'elements doit etre positif.\n");
        return 1;
}
tableau = (int *)malloc(n * sizeof(int));
if (tableau == NULL) {
        printf("Erreur : impossible d'allouer la memoire.\n");
        return 1;
}
 printf("Entrez les elements du tableau :\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }
    printf("\nLes elements du tableau sont :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    free(tableau);
    tableau = NULL;
    return 0;
}
