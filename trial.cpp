#include<stdio.h>

int main()
{ 
	int arr[100];
	int n;
	printf("enter the number on elements ");
	scanf("%d",&n);
	printf("enter %d number of elements ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<n;j++)
	{
		printf("%d\t",arr[j]);
	}
	//linear search
	int c;
	int k;
    printf("enter number to be searched ");
    scanf("%d",&c);
    for( k=0;k<n;k++)
    {
    	if(c==arr[k])
    	{
    		printf("%d is present at %d",c,k+1);
    		break;
		}
		
	}
	if(k==n)
	
		printf("not found");
	return 0;
	
	
}
