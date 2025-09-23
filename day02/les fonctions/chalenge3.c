#include <stdio.h>
int main() {
    int taille;
    int somme = 0;
    int i;
    printf("Entrez le nombre d'elements dans le tableau : ");
    scanf("%d", &taille);
    int tableau[taille];
     printf("Entrez les %d elements du tableau :\n", taille);
    for (i = 0; i < taille; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }
    for (i = 0; i < taille; i++) {
        somme += tableau[i];
    }
    printf("La somme totale des elements du tableau est : %d\n", somme);

    return 0;
}
