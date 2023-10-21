#include <stdio.h>
int main()
{
    int n;
    int arr[n];
    scanf("%d", &n);
    
    for(int i=0; i<=n;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    arr[2]=9;
    
    for(int i=0; i<=n;i++)
    {
        printf("%d", arr[i]);
    }
}
