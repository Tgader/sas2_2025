#include <stdio.h>
int main() {
float temp;
printf("enter la temperature en celsius : ");
scanf("%f" , &temp);
if (temp < 0)  {
    printf("est solid");
}
else if (temp >= 0 && temp < 100){
    printf("est liquid");
}
else {
    printf("est gazeux");
}
return 0;




}
