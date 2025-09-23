#include <stdio.h>
int main(){

    float prime_base;
    int age_conducteur;
    int type_voiture;
    int nb_accidents;
    float prime_finale;

printf("Entrez l'age du conducteur : ");
    scanf("%d", &age_conducteur);

    printf("Entrez le type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale) : ");
    scanf("%d", &type_voiture);

    printf("Entrez le nombre d'accidents au cours des 5 dernieres annees : ");
    scanf("%d", &nb_accidents);
    printf("Entrez la prime de base : ");
    scanf("%f", &prime_base);
    prime_finale = prime_base;
    if (age_conducteur < 25) {
        prime_finale *= 1.5;
    } else if (age_conducteur > 65) {
        prime_finale *= 1.2;
    }
    switch (type_voiture) {
        case 1:
            prime_finale *= 2.0;
            break;
        case 2:
            prime_finale *= 1.2;
            break;
        case 3:
            prime_finale *= 1.1;
            break;
        default:
            printf("Type de voiture invalide. La prime ne sera pas modifiée pour le type de voiture.\n");
            break;
    }

    if (nb_accidents > 1) {
        prime_finale *= 1.30;
    }

    printf("\nLa prime d'assurance finale est de : %.2f\n", prime_finale);


return 0;
}
