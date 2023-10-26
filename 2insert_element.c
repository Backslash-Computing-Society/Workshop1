#include <stdio.h>

int main()
{
    int arr[100],i,n,x,pos;
    printf("Enter the original number of elements you want in an array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("original array:\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the element you want to insert:");
    scanf("%d",&x);
    printf("enter the position at which you want to insert the element:");
    scanf("%d",&pos);
    n++;
    for(i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=x;
    printf("updated array:\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}