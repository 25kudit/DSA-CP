#include<stdio.h>
int main(){
    int a[10];
    printf("Enter the array:\n");
    for(int i=0;i<10;i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    int n=10;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
               for(int k=j;k<n-1;k++){
                   a[k]=a[k+1];
               }
               n--;
            }
            //else n--;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}