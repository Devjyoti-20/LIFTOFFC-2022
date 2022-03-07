//LOCW2-Q4
#include<stdio.h>
void main()
{
    int n,i,n1=0,n2=1,n3;
    printf("Enter no of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series-");
    for(i=1;i<=n;i++)
    {
    if(i==1)
        printf(" %d",n1);
    else if(i==2)
        printf(" %d",n2);
    else
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf(" %d",n3);
    }
    }
}