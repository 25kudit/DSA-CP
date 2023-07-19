#include<stdio.h>
#define min(x,y)(x<y?x:y)
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
    int n=min(n1,n2),c=0;
    int inter[n];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i]==b[j]){
                inter[c]=a[i];
                c++;
                break;
            }
        }
    }
    printf("\nIntersection of the sets is: ");
    for(int i=0;i<c;i++)    printf("%d ",inter[i]);
    return 0;
}