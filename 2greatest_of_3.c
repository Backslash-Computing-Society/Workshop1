#include <stdio.h>

int main()
{
    //WAP to find greatest of three numbers using if else method
    int a,b,c;
    printf("Enter any three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c){
        printf("%d is greatest\n",a);
    }
    else if(b>a&&b>c){
        printf("%d is greatest\n",b);
    }
    else{
        printf("%d is greatest\n",c);
    }

    //WAP to find the greatest of three numbers using ternary op
    (a>b)?(a>c)?printf("%d is greatest\n",a):printf("%d is greatest\n",c):(b>c)?printf("%d is greatest\n",b):printf("%d is greatest\n",c);
    return 0;
}