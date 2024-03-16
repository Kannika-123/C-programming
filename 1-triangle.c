#include<stdio.h>
#include<stdlib.h>

void one_triangle(int);

int main()
{
    int n;

    printf("Enter the n: ");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("Invalid input\n");
        exit(0);
    }

    one_triangle(n);
}

void one_triangle(int n)
{
    int i,j;


    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("1\t");
        }
        printf("\n");
    }
}
