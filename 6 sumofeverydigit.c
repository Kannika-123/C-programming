//Modular C program to display every digit of a given integer numbers
/*Name:Kannika
  Division:s
  Roll no:1925
  Date:06/02/2023
*/
#include<stdio.h>
void display_digits(int number);
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    display_digits(number);
    return 0;
}
void display_digits(int number)
{
    int rem,sum;
    while(number!=0)
    {
        rem=number%10;
        printf("%d\n",rem);
        number=number/10;
        sum=sum+rem;
    }
    printf("The sum of the given number is : %d",sum);
}
