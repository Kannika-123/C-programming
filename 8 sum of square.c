//Modular C program to calculate the sum of square of every digit should be divisible by 9
/*Name:Kannika
  Roll no:1925
  Division:S
  Date:8/2/2023
*/
#include<stdio.h>
void square(int n);
int main()
{
    int n;
    printf("Enter the n value : ");
    scanf("%d",&n);
    square(n);
    return 0;
}
void square(int n)
{
    int square=0,rem;
    while(n!=0)
    {
       rem=n%10;
       square=(rem*rem)+square;
       n=n/10;
    }
    if(square%9==0)
        printf("%d is divisible by 9",square);
    else
        printf("%d is not divisible by 9",square);
}
