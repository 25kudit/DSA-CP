#include<stdio.h>
int main(){
    system("cls");
    int n;
    printf("\nenter the number: ");
    scanf("%d",&n);
    if(n<100){
        if(n%2==0){
            printf("\nnumber is below 100 and even");
        }
        else{
            printf("\nnumber is below 100 and odd");
        }
    }
    else{
        printf("\nnumber is above 100");
    }
    return 0;

}
