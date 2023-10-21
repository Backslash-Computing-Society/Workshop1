#include<stdio.h>
void sum()
{
    int a,b,sum=0;
    printf("enter two numbers:  ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("the sum is %d", sum);
}

void main()
{
    sum();
    printf("hello");
}
