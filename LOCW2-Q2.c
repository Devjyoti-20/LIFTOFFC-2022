//LOCW2-Q2
#include<stdio.h>
void main()
{
    int n,i,so=0,se=0;
    printf("Enter 10 nos");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
            se+=n;
        else
            so+=n;
    }
    printf("Sum of odd nos:%d\n",so);
    printf("Sum of even nos:%d",se);
}