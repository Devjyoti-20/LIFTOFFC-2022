//LOCW2-Q3
#include<stdio.h>
#include<math.h>
void main()
{
    int n,q,r,l,f,d;
    printf("Enter a no: ");
    scanf("%d",&n);
    l=n%10;
    d=(int)log10(n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        q/=10;
        if(q==0)
        f=r;
    }
    q=(l*(int)pow(10,d))+(n%(int)pow(10,d));
    q=q-l+f;
    printf("%d",q);
}