#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    float bs,da,hra,pf,net;
    printf("enter the basic salary: ");
    scanf("%f",&bs);
    da=bs*25/100;
    hra=bs*15/100;
    pf=(bs+da+hra)*10/100;
    net=bs+da+hra-pf;
    printf("your net salary is: %f",net);
    return 0;
}