//Modular c program to print odd and even natural numbers separate
/*Name:Kannika
  Roll no:1925
  Division:S
  Date:06/02/2023
*/
#include<stdio.h>
void display_even_odd(int n);
int main()
{
    int n;
    printf("Enter n value\n");
    scanf("%d",&n);
    if(n>0)
    {
        display_even_odd(n);
    }
    else
    {
        printf("n should be positive\n");
    }
    return 0;
}
void display_even_odd(int n)
{
    int i=1;
    while(i<=n)
    {
        if(i%2!=0)
            printf("%d\t",i);
        i++;
    }
    i=1;
    while(i<=n)
    {
        if(i%2==0)

            printf("%d\t",i);
        i++;
    }
}
