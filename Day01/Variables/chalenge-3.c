#include <stdio.h>
#include <stdlib.h>

int main()
{
   float Y,KM;
   printf("entrer la distance en kilomètres: ");
   scanf("%f" , &KM);
   Y=KM * 1093.61;
   printf("la distance en yards est: %.2f\n",Y);
   return 0;
}
