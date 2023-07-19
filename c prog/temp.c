#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    printf("enter temperture in degree celcius: ");
    float tc;
    scanf("%f",&tc);
    printf("equivalent temp in degree fahrenheit is %f", (tc*9/5)+32);
    return 0;
}