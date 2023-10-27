#include <stdio.h>
char arr[]={'0','1','2','3','4','5','6','7','8','9'};
int WIN();
void BOARD()
{
    printf("        |       |      \n");
    printf("   %c    |  %c    |  %c  \n",arr[1],arr[2],arr[3]);
    printf("  ___   | ___   | ___  \n");
    printf("        |       |      \n");
    printf("   %c    |  %c    |  %c  \n",arr[4],arr[5],arr[6]);
    printf("  ___   | ___   | ___  \n");
    printf("        |       |      \n");
    printf("   %c    |  %c    |  %c  \n",arr[7],arr[8],arr[9]);
    printf("  ___   | ___   | ___  \n");
}
int WIN()
{
    if(arr[1]==arr[2] && arr[2]==arr[3])
        return 1;
    if(arr[4]==arr[5] && arr[5]==arr[6])
        return 1;
    if(arr[7]==arr[8] && arr[8]==arr[9])
        return 1;
    if(arr[1]==arr[4] && arr[4]==arr[7])
        return 1;
    if(arr[2]==arr[5] && arr[5]==arr[8])
        return 1;
    if(arr[3]==arr[6] && arr[6]==arr[9])
        return 1;
    if(arr[1]==arr[5] && arr[5]==arr[9])
        return 1;
    if(arr[3]==arr[5] && arr[5]==arr[7])
        return 1;

    int space=0;
    for (int i=1;i<=9;i++)
    {
        if(arr[i]=='X' || arr[i]=='O')
            space++;
    }
    if(space==9)
        return 0;
    return -1;
}
void main()
{
    int win=1,p=1,val;
    char p1[100],p2[100],s[2],sym;
    printf("WELCOME TO THE TIC TAC TOE GAME \n");
    BOARD();
    printf("Input 1st player name : ");
    gets(p1);
    printf("Input 2nd player name : ");
    gets(p2);
    while(win==1)
    {
        if(p%2==0)
        p=2;
        else
        p=1;
        if(p==1)
        sym='X';
        else
        sym='O';
        printf("Player %d enter a number : \n",p);
        scanf("%d",&val);
        if(val<1 || val>9)
        {
            printf("INVAID INPUT \n");
            printf("  TRY AGAIN \n");
        }
        if(p==1 && arr[val]=='O')
        {
            printf("INVALID");
            continue;
        }
        else if(p==2 && arr[val]=='X')
        {
            printf("INVALID");
            continue;
        }
        arr[val]=sym;
        BOARD();
        if(WIN()==1)
        {
            if(p==1)
            {
                printf("Winner player is : ");
                puts(p1);
                return ;
            }
            else
            {
                printf("Winner player is : ");
                puts(p2);
                return ;
            }
        }
        else if(WIN()==0)
        {
            printf("The Match is Draw");
            return ;
        }
        p++;
    }
}