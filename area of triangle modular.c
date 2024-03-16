//modular C program to calculate the area of the triangle
/*Name:Kannika
  Roll No: 1925
  Division: S
  Date: 15/01/2023
*/
#include <stdio.h>
float area_of_the_triangle(float b,float h);
int main()
{
    float a,b,h;
    printf("Enter Base\nEnter Height\n");
    scanf("%f%f",&b,&h);

    a=area_of_the_triangle(b,h);
    printf("Area of the triangle is %f",a);
    return 0;
}
float area_of_the_triangle(float b,float h)
{
    float a;
    a=0.5*b*h;
    return a;
}
