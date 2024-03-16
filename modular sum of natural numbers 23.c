//Modular C program to compute sum of natural numbers
/*Name: Kannika
  Roll no: 1925
  Division: S
  Date: 23/01/2023
*/
#include<stdio.h>
//function prototype
int sum_of_naturals(int sum);
int main()
{
    int n, sum;
    printf("Enter number of natural numbers to add");
    scanf("%d",&n);
    //function call
    sum=sum_of_naturals(sum);
    printf("sum is %d\n",sum);
    return 0;
}
//function defintion
int sum_of_naturals(int sum)
{
    int i,n;
    while(i<=n)
    {
        printf("%d\t",i);
        sum+=i;
        i++;
    }
    return sum;
}

