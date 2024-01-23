// append data into a file.
#include <stdio.h>
#include <string.h>
int main()
{
   FILE *pf;
   char str[50];
 
   pf = fopen("data.txt", "a");
 
   printf("Enter your message:");
   gets(str);
 
   fprintf(pf, "%s",str);
 
   printf(" message is appended in data file");
   fclose(pf);

return 0;
}