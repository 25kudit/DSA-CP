#include<stdio.h>
int main()
{
short num[4][2]={2,7,10,12,15,18,20,24};
printf("%d %d",*(num+0)[2],**(num+2));
return 0;
}