#include<stdio.h>
int main()
{
	int arr[100],i,mid,l=0,r,n,key;
	printf("enter the value for n");
	scanf("%d",&n);
	r=n-1;
	printf("Enter the sorted array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
    }
    
    printf("enter the value to be searched");
    scanf("%d",&key);
    
    while(l<r)
    {
    	mid=l+r/2;
    	
    	if(key==arr[mid])
    	{
    		printf("the value is present at index");
    		printf("%d",mid);
    		break;
		}
		
		else if(key>arr[mid])
		{
			l=mid+1;
		}
		
		else if(key<arr[mid])
		{
			r=mid-1;
		}
	}
	if(l>r)
	printf("the required value is not present");
}
