//LOCW2-Q1
#include <stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50],sc[100];
    printf("Enter a string: ");
    gets(s1);
    printf("Enter another string: ");
    gets(s2);
    puts(s1);
    puts(s2);
    strcpy(sc,strcat(s1,s2));
    printf("%s\n",sc);
    int i,l;
    l=strlen(sc);
    for(i=l-1;i>=0;i--)
    {
        printf("%c",sc[i]);
    }

    return 0;
}