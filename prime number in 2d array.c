#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define ROW 10
#define COL 10

void readmatrix(int [][COL], int , int);
void displaymatrix(int [][COL], int , int);
void countprime(int [][COL], int, int, int []);
int prime(int [], int);
int prime1(int);

int main()
{
    int a[ROW][COL], b[ROW];
    int r, c;

    printf("Enter the order: \n");;
    scanf("%d%d",&r,&c);

    printf("Enter the elements of the matrix: \n");
    readmatrix(a, r, c);

    printf("The matrix is : \n");
    displaymatrix(a, r, c);

    printf("\n");;
    countprime(a, r, c, b);
}

void readmatrix(int a[][COL], int r, int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

void displaymatrix(int a[][COL], int r, int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
}

void countprime(int a[][COL], int r, int c, int b[])
{
    int p;

    for(int i=0;i<r;i++)
    {
        p=prime(a[i], c);
        printf("The no of prime no. in row %d is %d\n", i, p);
    }
}

int prime(int a[], int n)
{
    int c=0;
    int p;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=2)
            continue;
        p=prime1(a[i]);
        if(p==1)
            c++;
    }
    return c;
}

int prime1(int n)
{
     int i, status = 0;
   if (n == 0 || n == 1)
    status = 1;

  for (i = 2; i <= n / 2; ++i)
    {
    if (n % i == 0)
    {
      status = 1;
      break;
    }
  }


  if (status == 0)
    return 0;
  else
   return 1;
}
