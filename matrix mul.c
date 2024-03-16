#include<stdio.h>
#include<stdlib.h>

#define ROW 100
#define COL 100
void readmatrix(int [][COL], int , int );
void displaymatrix(int [][COL], int , int );
void mul(int [][COL],int , int ,int ,int ,int [][COL]);
int main()
{
    int a[ROW][COL],b[ROW][COL];
    int r1, c1;
    int r2,c2;

    printf("Enter the order of matrix 1: ");
    scanf("%d%d",&r1,&c1);

            printf("Enter the matrix 1 elements: \n");
            readmatrix(a, r1, c1);

    printf("Enter the order of matrix 2: ");
    scanf("%d%d",&r2,&c2);

            printf("Enter the matrix 2 elements: \n");
            readmatrix(b, r2, c2);

    printf("The matrix 1 elements are: \n");
    displaymatrix(a, r1, c1);

     printf("The matrix 2 elements are: \n");
    displaymatrix(b, r2, c2);

    if(c1==r2)
        mul(a,r1,r2,c1,c2,b);
    else
        printf("MULTIPLICATION NOT POSSIBLE\n");

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

void mul(int a[][COL],int r1, int r2,int c1,int c2,int b[][COL])
{
    int MUL[ROW][COL];
    int i,j;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            MUL[i][j]=0;

            for(int k=0;k<c1;k++)
                MUL[i][j]=MUL[i][j]+a[i][k]*b[k][j];
        }
    }
    printf("The multiplied matrix is \n");
    displaymatrix(MUL, r2, c2);
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

