#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    printf("enter the value of n: ");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
             printf("*");
        }
        printf("\n");

    }
    printf("\a");
    return 0;
}