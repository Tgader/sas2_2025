#include <stdio.h>
int main()
{
    float kmh, ms;
    printf("enter la vitesse en km/h: ");
    scanf("%f", &kmh);
    ms = 0.27778* kmh;
    printf("la vitesse est : %.2f m/s \n", ms);
    return 0;
}
