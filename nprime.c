#include <stdio.h>
#include <stdbool.h>

bool prime(int n);

int main(void)
{
    int n;
    printf("Enter the range: ");
    scanf("%d", &n);
    printf("The first %d prime numbers are: ", n);

    int i = 1, j = 1;
    while(i <= n)
    {
        bool b = prime(j);
        if(b)
        {
            i++;
        }
        j++;
    }
}
bool prime(int n)
{
    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }
    if(count == 2)
    {
        printf("%d ", n);
        return true;
    }
    else
    {
        return false;
    }

}
