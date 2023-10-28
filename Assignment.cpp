#include<stdio.h>
#include<string.h>
#include<math.h>


  
void swap(int, int);   
int main()  
{  
    int a,b;  
    printf("Enter values for a and b : ");  
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d and b = %d\n", a,b);  
    swap(a,b); 
    return 0;  
}  
void swap(int x, int y)  
{  
    int temp; 
    temp = x;  
    x  = y;  
    y  = temp;  
    printf("After swapping: a = %d and b = %d", x, y);  
}

void swap(int* ,int*);
int main ()
{
  int a,b;
  printf("Enter a number: ");
  scanf("%d", &a);
  printf("Enter another number : ");
  scanf("%d" , &b);
  printf("Before Swapping : a=%d,b=%d\n",a,b);
  swap( &a, &b);
  printf("After Swapping : a=%d,b=%d\n",a,b);
  return 0;
}
void swap(int *a,int *b)
{
  *a += *b;
  *b = *a-*b;
  *a = *a-*b;
}

int primenumber(int number) 
{ 
    int i;
    for (i=2; i<=number/2; i++)  
    { 
        if (number % i != 0) 
            continue; 
        else
            return 1; 
    } 
    return 0; 
} 
int main() 
{ 
    int num,z=0;
    printf("Enter a number : ");
    scanf("%d", &num);
    z=primenumber(num); 
    if (z==0) 
        printf("%d is a prime number", num); 
    else
        printf("%d is not a prime number", num); 
}

/*int hcf1(int num1,int num2) {
  if (num1==0) 
  {
    return num2;
  }

  while (num2!= 0) 
  {
    if (num1>num2)
      num1 = num1 - num2;
    else
      num2-=num1;
  }
	return num1;
}

int main() {
  int num1,num2, hcf, lcm;
  printf("Enter two integers\n");
  scanf("%d%d", &num1, &num2);
  hcf = hcf1(num1,num2);
  lcm = (num1*num2)/hcf;
  printf("Greatest common divisor of %d and %d = %d\n", num1, num2, hcf);
  printf("Least common multiple of %d and %d = %d\n", num1, num2, lcm);

  return 0;
}
*/
/*void fibonacci(int num)  
{  
    int num1=0,num2=1,num3;  
  
    printf("\nFibonacci Series: \n");  
    printf("%d %d", num1, num2);  
  
    for(int i=3;i<=num;i++)  
    {  
        num3 = num1+num2;  
        printf("%d %d",count,num3);  
        num1= num2;  
        num2=num3;  
    }  
}    
int main()  
{  
    int n;  
    printf("enter n: ");  
    scanf("%d",&n);
    fibonacci(n);  
    return 0;  
}*/
/*int sum(int num,int b)
{
    if(num==0)
    return b;
    b=b+num % 10;
    return sum(num/10,b);
}
int main ()
{
    int num,b=0;
    printf("enter number ");
    scanf("%d",&num);
    printf("The number is: %d\n",num);   
    printf("Sum: %d\n",sum(num,b);
 	return 0;

}*/
/*
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	int a=fact(n-1);
	int factN=a*n;
	return factN;
}
int main()
{
	int n;
	printf("enter number ");
	scanf("%d",&n);
	printf("factorial of number is %d",fact(n));
	return 0;
}*/
/*int fib(int n)
{
	if(n==0)
	{
		return 1;
	}
	if(n==1)
	{
		return 1;
	}
	int a=fib(n-1);
	int b=fib(n-2);
	int fibN= a + b;
	return fibN;
	}
	int main()
	{
		int n;
		printf("enter number");
		scanf("%d",&n);
		printf("fibonacci number is %d",fib(n));
		return 0;
	}*/
	
/*int sum(int n){
	if(n==1)
	{
		return 1;
	}
	int sumNm1= sum(n-1);
	int sumN =sumNm1+n;
	return sumN;
	
}
int main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
	printf("sum is %d",sum(n));
	return 0;
}*/

int factorial(int n) 
{ 
	if(n == 0) 
		return 1; 
	int i = n, fact = 1; 
	while (n / i != n) 
	{ 
		fact = fact * i; 
		i--; 
	} 
	return fact; 
} 
int main() 
{ 
	int num; 
	printf("enter number");
	scanf("%d",&num);
	printf("Factorial of %d is %d", num, factorial(num)); 
	return 0; 
} 


