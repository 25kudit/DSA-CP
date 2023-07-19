#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter the size of first set: ");
    scanf("%d",&n1);
    printf("enter the size of second set: ");
    scanf("%d",&n2);
    int a[n1],b[n2];
    printf("\nEnter the elements of first set: ");
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter the elements of second set: ");
    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }

    printf("\nUnion of sets is: ");
    for(int i=0;i<c;i++)    printf("%d ", uni[i]);
    return 0;
}