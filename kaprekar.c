#include <stdio.h>
#include <math.h>
void main()
{
    int m,n;
    printf("INPUT THE LOWER RANGE :");
    scanf("%d",&m);
        printf("INPUT THE UPPER RANGE :");
        scanf("%d",&n);
        int freq=0;
        printf("THE KAPREKAR'S NUMBERS ARE :");
        for(int i=m;i<n;i++)
        {
            int sq=i*i;
            int temp=sq;
            double digits=0;
            while(temp>0)
            {
                digits++;
                temp/=10;
            }
            for(int j=1;j<digits;j++)
            {
                if((int)pow(10,j)==i)
                    break;
                int part1=sq%(int)(pow(10,j));
                int part2=sq/(int)(pow(10,j));
                if((part1+part2)==i)
                {
                    if(freq!=0)
                    {
                        printf(",%d",i);
                        freq++;
                    }
                    else 
                    {
                        printf("\n%d",i);
                        freq++;
                    }
                }
            }
        }
        if(freq==0)
            printf("NIL");
        printf("\nFREQUENCY OF KAPREKAR NUMBERS is : %d",freq);
}