#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    float r;
    printf("enter the radius of the circle: ");
    scanf("%f",&r);
    printf("circumference of the circle is: %f", r*2*3.14);
    printf("\narea of the circle is: %f", r*r*3.14);
    return 0;       
}