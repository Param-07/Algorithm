#include<stdio.h>
int main()
{
	int key, arr[100], i, j, n;
	printf("enter the size of array");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
	
		key= i;	
		for(j=i+1;j<n;j++)
		{
			if(arr[key]>arr[j])
			{
				key=j;
			}
			
			
		}
		int temp = arr [i];
			    arr[i]=arr[key];
			    arr[key]=temp;
	}
	
	printf("sorted array is");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}

