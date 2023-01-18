#include<stdio.h>
#include<conio.h>
#include<dirent.h>
int main()
{
    struct dirent *d;
    DIR *dr;
    dr = opendir(".");
    if(dr!=NULL)
    {
        printf("List of Files & Folders:-\n");
        for(d=readdir(dr); d!=NULL; d=readdir(dr))
        {
            printf("%s\n", d->d_name);
        }
        closedir(dr);
    }
    else
        printf("\nError occurred while opening the current directory!");
    getch();
    return 0;
}