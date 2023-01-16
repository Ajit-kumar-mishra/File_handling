#include<stdio.h>
#include<conio.h>
int main()
{
    int status;
    char fname[20];
    printf("Enter FileName: ");
    gets(fname);
    status = remove(fname);
    if(status==0)
        printf("\nFile deleted successful!");
    else
        printf("\nUnable to delete file!");
    getch();
    return 0;
}