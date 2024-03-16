#include<stdio.h>

void fibonacci(int n, FILE *output)
{
    int first=0,second=1,next,i;
    for(i=0;i<n;i++)
    {
        if(i<=1)
        {
            next=i;
        }
        else
        {
            next=first+second;
            first=second;
            second=next;
        }
        fprintf(output,"%d",next);
        printf("%d",next);
    }
}

int main()
{
    int n;
    FILE *input=fopen("ifibo.txt","r");//open the input file
    if(input==NULL)
    {
        printf("ERROR opening input file\n");
    }
    FILE *output=fopen("ofibo.txt","w");//open the output file

    fscanf(input,"%d",&n);//read input from file

    fibonacci(n,output);

    fclose(input);
    fclose(output);
    return 0;
}
