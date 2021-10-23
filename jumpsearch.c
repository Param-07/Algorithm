#include<stdio.h>
#include<math.h>
int main()
{
	int arr[100],i,low=0,high,jump,n,key;
	printf("enter the value of n");
	scanf("%d",&n);
	
	printf("enter the sorted array");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&arr[i]);
    }
    
    printf("enter the value to be searched");
    scanf("%d",&key);
    jump = sqrt(n);
	high=jump;
	
	while(high<n)
	{
		if(key==arr[high])
		{
			printf("the required value is at index");
			printf("%d",high);
		}
		else if(key<arr[high] && key>=arr[low])
		{
			n=high;
			break;
		}
		else if(key>arr[high])
		{
			low=high;
			high=high+jump;
		}
	}
	
	for(i=low;i<n;i++)
	{
		if(key==arr[i])
		{
	    	printf("the required value is at index:");  
		    printf("%d",i);
	     	break;
     	}
	}
	
	if(i==n)
	{
	 printf("the required values does not exist in given array");
    }
}
