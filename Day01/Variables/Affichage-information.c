#include <stdio.h>
#include <stdlib.h>

int main()
{  
    char nom [18], prenom[18], sexe[18], email[100];
    int age;
    printf("Quel est votre nom ? ");
    scanf("%s", nom);                   
    printf("Quel est votre prenom ? ");
    scanf("%s", prenom);            
    printf("Quel est votre age ? ");
    scanf("%d", &age);
    printf("Quel est votre sexe ? ");
    scanf("%s", sexe);
    printf("Quel est votre email ? ");
    scanf("%s", email);
    printf("Bonjour %s %s, vous avez %d ans, vous etes %s et votre email est %s\n", prenom, nom, age, sexe, email);
    return 0;
        




}