#include <stdio.h>
#include <stdlib.h>

int main()
{
   float K,C;
   printf("entrer votre temperature en celsius: ");
   scanf("%f" , &C);
   K=C + 273.15;
   printf("la temperature en kelvin est: %.2f\n",K);
   return 0;
}

