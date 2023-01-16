#include<stdio.h>
#include<conio.h>
int main()
{
   FILE *fp;
   char ch, fname[30];
   int noOfChar=0, noOfSpace=0, noOfTab=0, noOfNewline=0;
   printf("Enter file name with extension: ");
   gets(fname);
   fp = fopen(fname, "r");
   while(fp)
   {
      ch = fgetc(fp);
      if(ch==EOF)
         break;
      noOfChar++;
      if(ch==' ')
         noOfSpace++;
      if(ch=='\t')
         noOfTab++;
      if(ch=='\n')
         noOfNewline++;
   }
   fclose(fp);
   printf("\nNumber of characters = %d", noOfChar);
   printf("\nNumber of spaces = %d", noOfSpace);
   printf("\nNumber of tabs = %d", noOfTab);
   printf("\nNumber of newline = %d", noOfNewline);
   getch();
   return 0;
}
