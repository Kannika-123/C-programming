#include<stdio.h>
#include<math.h>

int isArmstrong(int);

int main()
{
    int n;
    int p;

    printf("Enter n: ");
    scanf("%d",&n);

    p=isArmstrong(n);

    if(p==1)
        printf("Armstrong");
    else
        printf("not Armstrong");
}

 int isArmstrong(int n)

{
    int rem;
    int sum=0;
    int temp=n;
    int count=0;

    while(n)
    {
        n=n/10;
        count++;
    }

    n=temp;
    while(n)
    {
        rem=n%10;
        sum=sum+pow(rem,count);
        printf("%d\n",sum);
        n=n/10;
    }

    if(sum==temp)
        return 1;
    else
        return 0;
}
