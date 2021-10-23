#include<stdio.h>
int main()
{
	int arr[100],i,key,n;
	printf("enter the value of n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("enter the value to be searched");
	scanf("%d",&key);
	
	for(i=0;i<n;i++)
	{
		if( key == arr[i])
		{
		 printf("the required value is at index:");
		 printf("%d",i);
	
	    }
	}
	if(i==n)
	printf("the required value is not present");
}
