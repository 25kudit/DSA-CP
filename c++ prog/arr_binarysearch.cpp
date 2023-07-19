#include<stdio.h>

void bsearch(int *arr1,int size,int tosearch)
{
	int beg,mid,end;
	beg=0;
	end=size-1;

	int count=0;
	
	
	
	while(beg<=end)
	{
		mid=(beg+end)/2;
	if(*(arr1+mid)==tosearch)
	{
	printf("Element found at %d",mid);
	return ;
	}
	else if(*(arr1+mid)>tosearch)
	{
	end=mid-1;
//	mid=(beg+end)/2;
	count++;
	}
	//if(*(arr1+mid)>tosearch)
	else
	{
	beg=mid+1;
//	mid=(beg+end)/2;
	count++;
	}
	}
	//printf("\n not found");

}



int main()
{
	int arr1[10]={12,24,35,46,57,68,79,90,99,100};
	bsearch(arr1,10,12);
//	if( z==1)
//	printf("found");
//	else 
//	printf("not found");
//	

}
