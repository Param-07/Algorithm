#include<stdio.h>
int main()
{
	int arr[100],i,j,n,key;
	printf("enter the array size");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && key<arr[j])
		{
			arr[j+1]=arr[j];
			j--;
		}
	
		arr[j+1]=key;
	}
	
	
	printf("the sorted array is");
	for(i=0;i<n;i++)
	  printf("%d",arr[i]);
}
