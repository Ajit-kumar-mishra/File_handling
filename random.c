#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int i, rnum;
    printf("Generating 10 Random Numbers:\n");
    for(i=0; i<10; i++)
    {
        rnum = rand();
        printf("%d\n", rnum);
    }
    getch();
    return 0;
}