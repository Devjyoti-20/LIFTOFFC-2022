//Find diameter,circumference and area of circle

#include <stdio.h>

int main()
{
    float r,d,c,a;
    printf("Enter radius of Circle: ");
    scanf("%f",&r);
    d=2*r;
    c=2*3.14*r;
    a=3.14*r*r;
    printf("Diameter of circle is %f.",d);
    printf("\nCircumference of circle is %f.",c);
    printf("\nArea of circle is %f.",a);
    
    return 0;
}