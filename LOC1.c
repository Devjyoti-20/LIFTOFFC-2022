// basic I/O program
#include <stdio.h>
int main()
{
    int regd_no;
    char name[40], branch[40], hobbies[40];
    printf("Enter your regd_no: ");
    scanf("%d",&regd_no);
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your branch: ");
    scanf("%s",branch);
    printf("Enter your hobbies: ");
    scanf("%s",hobbies);
    printf("\nStudent Details:-\n");
    printf("NAME-%s \nREGD_NO-%d \nBRANCH-%s \nHOBBIES-%s",name,regd_no,branch,hobbies);

    return 0;
}