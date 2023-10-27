#include<stdio.h>
int main()
{
	int arr[5]={2,1,4,89,68},min_ind,temp;
	for(int i=0;i<5;i++)
	{
		min_ind=i;
		for(int j=i+1;j<5;j++)
		{
			if(arr[j]<arr[min_ind])
			{
				min_ind=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min_ind];
		arr[min_ind]=temp;
	}
	printf("Sorted array is\n");
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
