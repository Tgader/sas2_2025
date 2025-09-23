#include <stdio.h>
int main(){

float revenu_annuel;
    int score_credit;
    int duree_pret;

printf("Entrez votre revenu annuel (en euros) : ");
    scanf("%f", &revenu_annuel);
printf("Entrez votre score de credit (sur 1000) : ");
    scanf("%d", &score_credit);
    printf("Entrez la duree du pret (en annees) : ");
    scanf("%d", &duree_pret);
if (revenu_annuel >= 30000 && score_credit >= 700 && duree_pret <= 10) {
        printf("Eligible\n");
    } else if (revenu_annuel >= 30000 && score_credit >= 650 && duree_pret <= 15) {
        printf("Eligible avec conditions\n");
    } else {
        printf("Non eligible\n");
    }
return 0;
}
