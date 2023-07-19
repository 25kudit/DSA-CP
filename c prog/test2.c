#include<stdio.h>
void fun(int i,int *j,int p){
    i++;j++;p++;
}
int main(){
    int i=10,j=6;
    int *p=i;
    fun(i,j,p);
    printf("%d %d %d ",i,j,p);
    return 0;
}