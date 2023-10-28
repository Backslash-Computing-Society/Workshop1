# include <stdio.h>
# include <math.h>
# include <string.h>
#include <stdlib.h>

/*int main()
{
	int i=6,j;
	for(j=1;j<=10;j++)
	{
		int k=i*j;
		printf("%d * %d = %d\n",i,j,k);
	}
	return 0;
}*/

/*int main()
{
	int i,y;
	printf("Enter the value of i : ");
	scanf("%d" ,&i);
	y=i<<2;
	printf("%d", y);
	return 0;
}*/

/*int main()
{
	int j,i,f=1;
	printf("Enter the value of j : ");
	scanf("%d", &j);
	for(i=1;i<=j;i++)
	{
	f=f*i;	
	}
	printf("The factorial is : %d", f);
	return 0;
}*/

/*the value of i : ");
	scanf("%d" , &i);
	printf("Enter the power : ");
	scanf("%d" , &j);
	int y=pow(i,j);
	printf("%d" , y);
	return 0;*/


/*int main()
{
	int i,j,k=0;
	printf("Enter the value of i : ");
	scanf("%d" , &i);
	for(j=1;j<=i;j++)
	{
		if(i%j==0)
		{
		k++;
	}
	}
	if(k==2)
	printf("%d" , i);
	return 0;
}*/


/*int main()
	{
		int rows,coef=1,space,i,j;
		printf("Enter number of rows : ");
		scanf("%d", &rows);
		for(i=0;i<=rows;i++)
		{
			for(space=1;space<=rows-i;space++)
			{
				printf(" ");
			}
			for(j=0;j<=i;j++)
			{
				if(j==0||i==0)
				coef=1;
				else
				coef=coef*(i-j+1)/j;
			printf("%4d" ,coef);
		}
		printf("\n");
		}
		return 0;
	}*/
	
/*	int main()
	{
		double a,b;
		double c;
		scanf("%d" ,&a);
		scanf("%d" ,&b);
		c=double(a/b);
		printf("%lf" , c);
		return 0;
	}*/
	
/*	int main()
	{
		int a;
		long int b;
		char ch;
		double c;
		scanf("%d",&c);
		printf("%d", sizeof(c));
		return 0;
	}*/
	
	
/*	int main()
	{
		int a,b,c;
		scanf("%d", &a);
		scanf("%d" , &b);
		c=(a>b)?a:b;
		printf("%d", c);
		return 0;
	}*/
	
	/*int main()
	{
		int i=6;
		do
		{
			printf("%d",i);
			i++;
		}
		while(i<=10);
		return 0;
	}
	
		int main()
	{
		int a,b,c;
		scanf("%d", &a);
		scanf("%d" , &b);
		c=(a>b)?a:b;
		printf("%d", c);
		return 0;
	}*/
	
	/*int main () 
	{

   int a = 10;

   do 
   {
      printf("value of a: %d\n", a);
      a = a + 1;
   }
   while( a < 20 );
 
   return 0;
}*/

/*int main()
{
	int coef,space,rows,i,j;
	scanf("%d",&rows);
	for(int i=0;i<rows;i++)
	{
		for(space=1;space<=rows-i;space++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			if(i==0||j==0)
			coef=1;
			else
			coef=coef*(i-j+1)/j;
			printf("%4d", coef);
		}
		printf("\n");
	}
	return 0;
}*/


/*int main()
{
	int a,b,c,s;
	printf("Enter 3 numbers : ");
	scanf("%d %d %d", &a,&b,&c);
	s=(a>b&&a>c)?a:(b>c)?b:c;
	printf("%d" , s);
	return 0;
}*/

/*int main()
{
	int i,j,t=1;
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=t;j--)
		{
			printf("%d", j);
		}
		printf("\n");
		t++;
	}
	return 0;
}*/

/*int main()
{
	int i,j,k,t=1;
	char ch='*';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(k=5;k>=t;k--)
		{
			printf("%c",ch);
		}
		printf("\n");
		t++;
	}
	return 0;
}*/

/*int main()
{
	int i,j,k,t=4;
	char ch='*';
	for(i=1;i<=9;i+=2)
	{
		for(k=1;k<=t;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c" , ch);
		}
		printf("\n");
		t--;
	}
	return 0;
}*/

/*int main()
{
	double i,b;
	scanf("%lf", &i);
	double pi=3.14;
	double d=pi/180;
	 b=sin(i*d);
	printf("%lf" , b);
}*/

/*int main()
{
	char a;
	int b;
	scanf("%c" , &a);
	b=sizeof(a);
	printf("%d" , b);
	return 0;
}*/

/*int main()
{
	int i;
	printf("Enter the value of i : ");
	scanf("%d", &i);
	i+=2;
	printf("%d\n",i);
	i=1;
	i*=2;
	printf("%d" , i);
	return 0;
}*/

/*int main()
{
	int i,j,k,GCD;
	printf("Enter two integers : ");
	scanf("%d %d" , &i,&j);
	for(k=1;k<=i&&k<=j;k++)
	{
		if(i%k==0&&j%k==0)
		GCD=k;
	}
	printf("GCD of %d and %d is : %d",i,j,GCD);
	return 0;
}*/

/*int main()
{
	int i,j,k,lcm;
	scanf("%d %d" , &i,&j);
		int n=i;
	int m=j;
	while(i!=j)
	{
		if(i>j)
		i-=j;
		else
		j-=i;
	}
	lcm=(n*m)/i;
	printf("%d" ,lcm);
	return 0;
}*/

/*int main()
{
	int i,j,k,gcd;
	scanf("%d %d",&j,&k);
	for(i=1;i<=j&&i<=k;i++)
	{
		if(j%i==0&&j%k==0)
		gcd=i;
	}
	printf("%d", gcd);
	return 0;
}*/

/*int main()
{
	int a,b,i,lcm;
	scanf("%d %d",&a,&b);
	int m=a;
	int n=b;
	while(a!=b)
	{
		if(a>b)
		a-=b;
		else
		b-=a;
	}
	lcm=(m*n)/a;
	printf("%d",lcm);
	return 0;
}*/


/*int main()
{
int i,rows,j,space,coef;
scanf("%d" ,&rows);
for(i=0;i<rows;i++)	
{
	for(space=1;space<=rows-i;space++)
	{
		printf(" ");
	}
	for(j=0;j<=i;j++)
	{
		if(i==0||j==0)
		coef=1;
		else
		coef=coef*(i-j+1)/j;
		printf("%4d" , coef);
	}
	printf("\n");
}
return 0;
}*/

/*int main()
{
	int i=1,b;
	do{
		printf("Enter a number  : ");
		scanf("%d" ,&b);
		if(b%5==0 && b%8==0)
		printf("%d",b);
		else
		printf("Not divisible\n");
		i++;
	}
	while(i<=10);
	return 0;
}*/

/*int main()
{
	int i,j,k,t=1,m=9;
	for(i=1;i<=9;i+=2)
	{
		for(k=1;k<t;k++)
		{
			printf(" ");
		}
		for(j=1;j<=m;j++)
		{
			printf("%d", j);
		}
		printf("\n");
		m-=2;
		t++;
	}
	return 0;
}*/

/*int main()
{
	int days,fine1;
	float fine;
	printf("Enter the number of days : ");
	scanf("%d", &days);
	if(days<=5)
	{
		fine=0.50;
		printf("%f", fine);
	}
	else if(days>=6&&days<=10)
	{
	fine1=1;
	printf("%d" , fine1);
}
else if(days>10&&days<30)
{
	fine1=10;
	printf("%d", fine1);
}
	else if(days==30)
	{
		printf("MEMBERSHIP CANCELLED");
	}
return 0;
}*/

/*int main()
{
int i,r,sum=0,n,d=1;
for(i=1;i<=500;i++)	
{
	n=d;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==d)
	{
	printf("It's an armstrong number : %d\n" , d);}
	else{
	printf("It's not an armstrong number : %d\n" ,d);}
	d++;
	sum=0;
}
return 0;
}*/

/*int main()
{
	int rows,space,i,j,coef;
	for(i=0;i<rows;i++)
	{
		for(space=1;space<=rows-i;space++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			if(i==0||j==0)
			coef=1;
			else
			coef=coef(i-j+1)/j;
			printf("%d", coef);
		}
		printf("")
	}
}*/


/*int main()
{
	int i,j,r,sum=0,t=1;
	for(j=1;j<=500;j++)
	{
		int n=t;
		i=n;
	while(i!=0)
	{
		r=i%10;
		sum=sum+(r*r*r);
		i=i/10;
	}
	if(sum==n)
	printf("%d is a armstrong number\n" , n);
	else
	printf("%d is not a armstrong number\n", n);
	sum=0;
	t++;
}
	return 0;
}*/


/*int main()
{
	int i,j,r,rev=0,t=1;
	for(j=1;j<=500;j++)
	{
	int n=t;
	i=t;	
	while(i!=0)
	{
		r=i%10;
		rev=r+(rev*10);
		i=i/10;
	}
	if(rev==n)
	printf("%d is a pallindrome number\n" , n);
	else
	printf("%d is not a pallindrome number\n" , n);
	t++;
	rev=0;
}
return 0;
}*/

/*int main()
{
	int i,j,rows,coef=1,space,t=2;
	printf("Enter the number of rows : ");
	scanf("%d", &rows);
	for(i=0;i<rows;i++)
	{
		for(space=0;space<=rows-t;space++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			if(i==0||j==0)
			coef=1;
			else
			coef=coef*(i-j+1)/j;
			printf("%4d" ,coef);
		}
		printf("\n");
		t++;
	}
	return 0;
}


/*int main()
{
	int i,j,lcm;
	printf("Enter a number : ");
	scanf("%d",&i);
	printf("Enter another number : ");
	scanf("%d", &j);
	int m=i;
	int n=j;
	while(i!=j)
	{
		if(i>j)
		i-=j;
		else
		j-=i;
	}
	lcm=(m*n)/i;
	printf("The hcf of the number is : %d\n", i);
	printf("The lcm of the number is : %d",lcm);
	return 0;
}*/


/*int main()
{
	int i,j,k,t=1,rows,n=2;
	printf("Enter the number of rows : ");
	scanf("%d" , &rows);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<=rows-n;j++)
		{
			printf(" ");
		}
		for(k=1;k<=t;k++)
		{
			printf("%d" , k);
		}
		t+=2;
		printf("\n");
		n++;
	}
	return 0;
}*/

/*int main()
{
	int i,j,rows,t=1;
	printf("Enter the number of rows : ");
	scanf("%d" , &rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=t;j++)
		{
			printf("%d" , j);
		}
		printf("\n");
		t++;
	}
	return 0;
}*/

/*int main()
{
	int ar[]={1,2,5,4,7};
	int i;
	for(i=0;i<=4;i++)
	{
		printf("%d\n" , ar[i]);
	}
	return 0;
}*/

/*int main()
{
	int i;
	printf("Enter a number or a letter or a digit : ");
	scanf("%c", &i);
	if(i>=65&&i<=90)
	{
		printf("It is a capital letter");
	}
	else if(i>=97&&i<=122)
	{
		printf("It is a small letter");
	}
	else if(i>=48&&i<=57)
	{
		printf("It is a digit");
	}
	return 0;
}*/

/*int main()
{
	int a,b,c;
	printf("Enter a number : ");
	scanf("%d", &a);
	printf("Enter another number : ");
	scanf("%d" , &b);
	printf("Enter a number : ");
	scanf("%d" , &c);
	if(a>b&&a>c)
	printf("%d is the greatest number" , a);
	else if(b>a&&b>c)
	printf("%d is the greatest number" , b);
	else
	printf("%d is the greatest number" , c);
	return 0;
}*/

/*int main()
{
	int a,b,c,e;
	printf("Enter a number : ");
	scanf("%d", &a);
	printf("Enter another number : ");
	scanf("%d" , &b);
	printf("Enter a number : ");
	scanf("%d" , &c);
	e=(a>b&&a>c)?a:(b>c&&b>a)?b:c;
	printf("The greatest number is %d", e);
	return 0;
}*/

/*int main()
{
	int a,b;
	printf("Enter a number : ");
	scanf("%d" ,&a);
	b=(a%2==0)?printf("The number is divisible by 2"):printf("The number is not divisible");
	return 0;
}*/

/*int main()
{
	int i,j,rows,space,coef=1,t=1;
	printf("Enter the number of rows : ");
	scanf("%d", &rows);
	for(i=0;i<rows;i++)
	{
		for(space=1;space<=rows-t;space++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			if(i==0||j==0)
			coef=1;
			else
			coef=coef*(i-j+1)/j;
			printf("%3d" , coef);
		}
		printf("\n");
		t++;
	}
	return 0;
}*/

/*int main()
{
	float fine;
	int a;
	printf("Enter the number of days the customer was late : ");
	scanf("%d" , &a);
	if(a>=1&&a<=5)
	{
		fine=0.05;
	}
	else if(a>=6&&a<=10)
	{
		fine=0.05+1;
	}
	else
	{
		fine=0.05+1+5.00;
	}
	if(a>=30)
	{
		printf("Membership cancelled");
	}
	printf("The fine is : %f" , fine);
	return 0;
}*/


/*int main()
{
	int i=1,f=1,a;
	printf("Enter the number : ");
	scanf("%d" , &a);
	while(i<=a)
	{
		f=f*i;
		i++;
	}
	printf("the factorial of the number is : %d", f);
	return 0;
}*/

/*int main()
{
	int i=1,f=1,a;
	printf("Enter the number : ");
	scanf("%d" , &a);
	do
	{
	  f=f*i;
	  i++;	
	}
	while(i<=a);
	printf("The factorial of the number is : %d", f);
	return 0;
}*/

/*int main()
{
	int i,f=1,a;
	printf("Enter the number : ");
	scanf("%d" , &a);
	for(i=1;i<=a;i++)
	{
		f=f*i;
	}
	printf("%d" , f);
	return 0;
}*/

/*int main()
{
	char arr[100];
	int k=0;
	printf("Enter a string : ");
	gets(arr);
	int len=strlen(arr);
	 int leng=len-1;
	 while(leng>k)
	 {
	if(arr[leng]!=arr[k])
	{
		printf("The word is not a pallindrome");
		exit(0);
	}
	leng--;
	k++;
}
printf("It's a pallindrome");
return 0;
}*/

/*int main()
{
	char ch[100];
	char ch1[100];
	printf("Enter a string : ");
	gets(ch);
	printf("Enter another string : ");
	gets(ch1);
	strcat(ch,ch1);
	puts(ch);
	return 0;
}*/

/*int main()
{
	char ch[100];
	printf("Enter a string : ");
	gets(ch);
	strupr(ch);
	puts(ch);
	return 0;
}*/

/*int main()
{
	char ch[100];
	printf("Enter a string : ");
	gets(ch);
	strlwr(ch);
	puts(ch);
	return 0;
}*/

/*int main()
{
	int a;
	int b;
	printf("Enter the values of a and b");
	scanf("%d %d", &a,&b);
	double d=a/b;
	printf("%f", d);
	return 0;
}*/

/*int main()
{
	int a,n;
	printf("Enter the number : ");
	scanf("%d" , &a);
	printf("Enter the power : ");
	scanf("%d" , &n);
	int e=pow(a,n);
	printf("The number is %d" , e);
	return 0;
}*/

/*int main()
{
	char ch[]="Tarshdeep kaurr";
	int i;
	for(i=0;i<15;i++)
	{
		printf("The letter is : %c\n", ch[i]);
	}
	return 0;
}*/

/*int main()
{
	char ch[]="Tarshdeep";
	printf("%d" , atol(ch));
	return 0;
}*/

/*int main()
{
	int array[100],search,c,n;
	printf("Enter the number of elements : ");
	scanf("%d" , &n);
	for(c=0;c<n;c++)
	{
		printf("Enter a number : ");
		scanf("%d" ,&array[c]);
	}
	printf("Enter a number to be searched : /n");
	scanf("%d" , &search);
	for(c=0;c<n;c++)
	{
		if(array[c]==search)
		{
		printf("%d is present at location %d" ,search,c+1);
		return(0);
	}
	}
	if(c==n);
	printf("The number is not found");
	return 0;
}*/

/*int main()
{
	char ch[100];
	int k=0;
	printf("Enter a string : ");
	gets(ch);
	int len=strlen(ch);
	int length=len-1;
	while(length>k)
	{
		if(ch[length]!=ch[k])
		{
		printf("The word is not a pallindrome");
		return(0);
	}
length--;
k++m;
}
printf("It is a pallindrome word");
return 0;
}*/

/*int main()
{
	int a,b;
	printf("Enter a number : ");
	scanf("%d" , &a);
	printf("Enter a number : ");
	scanf("%d" ,&b);
	int n=a;
	int m=b;
	while(a!=b)
	{
		if(a>b)
		a-=b;
		else
		b-=a;
	}
	int c=a;
	int lcm=(n*m)/c;
	printf("The gcd of the number is : %d" ,lcm);
	return 0;
}*/

/*int main()
{
	int i, j,rows,space,coef=1;
	printf("Enter the number of rows : ");
	scanf("%d" , &rows);
	for(i=0;i<rows;i++)
	{
		for(space=1;space<=rows-i;space++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			if(i==0||j==0)
			coef=1;
			else
			coef=coef*(i-j+1)/j;
			printf("%4d" , coef);
		}
		printf("\n");
	}
	return 0;
}*/

/*int main()
{
	int i,t,rev=0,k=1,r;
	for(i=1;i<=500;i++)
	{
		t=k;
		while(t!=0)
		{
			r=t%10;
			rev=r+(rev*10);
			t=t/10;
		}
		if(rev==k)
		{
		printf("It's a pallindome number : %d\n", k);
	}
		else 
		{
		printf("It's not a pallindrome number : %d\n", k);}
	k++;
	rev=0;
}
return 0;
}*/

int main()
{
	double b;
	scanf("%lf" ,&b);
	double c=3.14/180;
	float e=cos(b*c);
	printf("%f" , e);
	return 0;
}




