//LOCW2-Q6
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the size of square: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1 || i==n)
        {
            for(j=1;j<=n;j++)
                printf("* ");
        }
        else
        {
            for(j=1;j<2*n;j++)
            {
                if(j==1 || j==2*n-1)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }

}