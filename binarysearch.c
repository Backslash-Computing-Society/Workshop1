#include<stdio.h>
int main()
{
	int arr[5],search_el,low,mid,high,ind=-1;
	printf("Enter the elements\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the search element\n");
	scanf("%d",&search_el);
	low=0;
	high=4;
	while(low<=high)
	{
		mid=low+(high-low)/2;
		if(arr[mid]==search_el)
		{
			ind=mid;
			break;
		}
		else if(arr[mid]>search_el)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	if(ind>=0)
	{
		printf("Element found at location %d",ind);
	}
	else
	{
		printf("Element not found");
	}
	return 0;
}
