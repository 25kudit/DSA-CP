#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    printf("enter array\n");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int idx,ele;
    printf("enter the index to insert: ");
    scanf("%d",&idx);
    printf("enter the value of new element: ");
    scanf("%d",&ele);
    int t[n+1];
    for(int i=(n+1);i>=0;i--){
        if(idx<i){
            t[i]=a[i-1];
        }
        if(idx==i){
            t[i]=ele;
        }
        if(idx>i){
            t[i]=a[i];
        }
    }
    printf("\nNew array: ");
    for(int i=0;i<=n;i++)printf("%d ",t[i]);
    return 0;
}