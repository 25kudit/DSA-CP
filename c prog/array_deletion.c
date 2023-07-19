#include<stdio.h>
int main(){
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the array: ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int idx;
    printf("enter the element to delete: ");
    scanf("%d",&idx);
    for(int i=0;i<n;i++){
        if(idx<=i){
            a[i]=a[i+1];
        }
    }
    printf("\nnew arrar is: ");
    for (int i = 0; i < (n-1); i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
    
    
}