#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int i;
    printf("\n ASCII characters are as follows: ");
    for ( i = -128; i < 129; i++)
    {
        printf("\n %d ==> %c",i,i);
    }
    getch();
    return 0;
    
}