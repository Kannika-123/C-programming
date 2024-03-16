#include<stdio.h>//header file

int main()
{
    //open a file for writing
    FILE *file=fopen("output.txt","w");

    //check if the file is opened successfully
    if(file==NULL)
    {
        printf("error opening file!\n");
        return 1;
    }

    //print "hello world to the file
    fprintf(file,"hello world\n");

    //close the file
    fclose(file);

    //print "hello world" to the console
    printf("Hello World\n");

return 0;
}
