#include<stdio.h>
#include<conio.h>
int main()
{
    char ch, fileName1[20], fileName2[20];
    FILE *fs, *ft;
    printf("Enter Source File Name (with extension): ");
    gets(fileName1);
    fs = fopen(fileName1, "r");
    if(fs == NULL)
    {
        printf("\nError in Opening the file, %s", fileName1);
        getch();
        return 0;
    }
    printf("Enter Target File Name (with extension): ");
    gets(fileName2);
    ft = fopen(fileName2, "w");
    if(ft == NULL)
    {
        printf("\nError in Opening the file, %s", fileName2);
        getch();
        return 0;
    }
    ch = fgetc(fs);
    while(ch != EOF)
    {
        fputc(ch, ft);
        ch = fgetc(fs);
    }
    printf("\nFile copied successfully.");
    fclose(fs);
    fclose(ft);
    getch();
    return 0;
}