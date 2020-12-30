//Question 2
// Write the algorithm/function for Ternary Search.

#include<stdio.h>
#include<conio.h>

int ternarysearch(int [],int,int,int);

int main()
{
	int n,i,key,x;
	printf("enter size of array\n");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("enter elements of array\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("enter value you want to search in the array\n");
	scanf("%d",&key);
	
	x=ternarysearch(arr,key,0,n-1);
	
	if(x==-1)
	{
	   printf("value %d not found in array\n",key);	
	}
	else
	{
		printf("value %d found at %d index\n",key,x);
	}
	
	getch();
	return 0;
}

// FUNCTION FOR TERNARY SEARCH

int ternarysearch(int arr[],int key,int l,int u)
{
	int mid1,mid2;
	
	
	while(l<=u)
	{
		
		mid1=l+(u-l)/3;
	    mid2=u-(u-l)/3;
	    
		if(arr[mid1]==key)
		{
			return mid1;
		}
		
		else if(arr[mid2]==key)
		{
			return mid2;
		}
		
		else if(key<arr[mid1])
		{
			u=mid1-1;
		}
		
		else if(key>arr[mid2])
		{
			l=mid2+1;
		}
		
		else
		{
			l=mid1+1;
			u=mid2-1;
		}
		
	}
	
	return -1;	
}

