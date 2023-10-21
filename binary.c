#include <stdio.h>
int main()
{
    int len,search,pos;
    printf("Input the size of array : ");
    scanf("%d",&len);
    int arr[len];
    for(int i=0;i<len;i++)
    {
        printf("Input the elements : ");
        scanf("%d",&arr[i]);
    }
    printf("Input the element to be searched : ");
    scanf("%d",&search);
    int low=0;
    int high=len-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(search==arr[mid])
        {
            printf("Element found at %d",mid);
            break;
        }
        if(search>arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(low>high)
    {
        printf("Element not found.");
    }
    return 0;
}