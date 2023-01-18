#include <stdio.h>

#define FSIZE 100
 
int main()
{
    FILE *fp;
    int count = 0;  
    char fname[FSIZE];
    char c; 
    printf("\n\n Read the file and count the number of lines :\n");
	printf("--------------------------------------------------\n"); 
	printf(" Input the file name to be opened : ");
	scanf("%s",fname);

    fp = fopen(fname, "r");
    if (fp == NULL)
    {
        printf("Could not open file %s", fname);
        return 0;
    }
    // Extract characters from file and store in character c
    for (c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n') // Increment count if this character is newline
            count = count + 1;
    fclose(fp);
    printf(" The lines in the file %s are : %d \n \n", fname, count-1);
    return 0;
}