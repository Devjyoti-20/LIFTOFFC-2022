// Program for arithmetic operations

#include<stdio.h>
int main()
{
    int a,b;
    char c='0';
    printf("Enter two numbers and choice(+ - * /): ");
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
    case '+':
        printf("Addition of two numbers is %d\n",a+b);
        break;
    case '-':
        printf("Subtraction of numbers is %d\n",a-b);
        break;
    case '*':
        printf("Multiplication of two numbers is %d\n",a*b);
        break;
    case '/':
        printf("Division of two numbers is %d",a/b);
        break;
    default:
        printf("Invalid choice");
    }
    return 0;
}