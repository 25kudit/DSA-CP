#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    system("cls");
    float a,b,c;
    printf(" enter the three sides of the triangle: ");
    scanf("%f%f%f",&a,&b,&c);
    float s=(a+b+c)/2;
    printf("\n the area of the triangle is: %f", sqrt(s*(s-a)*(s-b)*(s-c)));
    return 0;
}