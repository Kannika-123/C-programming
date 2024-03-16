#include<stdio.h>
#include<stdlib.h>

void readarray(int [], int);
void displayarray(int [], int);
void bubblesort(int [], int, int);

int main()
{
    int a[100];
    int n;

    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    if(n <= 0 || n > 100)
    {
        printf("Invalid data\n");
        exit(0);
    }

    printf("Enter the array elements: \n");
    readarray(a, n);

    printf("\nThe array elements are: \n");
    displayarray(a, n);

    bubblesort(a, n);

    printf("\nThe sorted array is : \n");
    displayarray(a, n);

    return 0;
}

void readarray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void displayarray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

void bubblesort(int a[], int n)
{
    int temp;

    for(int i = n-1; i >= 0; i--)
    {
        for(int j = n-1-i; j >=0 ; j--)
        {
            if(a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
