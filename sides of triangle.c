#include<stdio.h>
int main()
{
	int a;
	printf("enter 1st side ");
	scanf("%d",&a);
	int b;
	printf("enter 2nd side ");
	scanf("%d",&b);
	int c;
	printf("enter 3rd side");
	scanf("%d",&c);
	
	if((a+b)>c && (b+c)>a && (a+c)>b)
	{
		printf("valid triangle");
	}
	else{
		printf("triangle is not valid");
		
	}
	return 0;
}