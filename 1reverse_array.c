#include <stdio.h>

int main()
{
    int arr[100],i,n,a;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    printf("Original array:\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    } 
    for(i=0;i<n/2;i++){
        a=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=a;
    }
    printf("\nReversed array:\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    } 
    return 0;
}