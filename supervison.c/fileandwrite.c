// create a file and write data into file.
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("text.txt","w");
    char name[100];

    fputc('y',fptr);
    fputc('a',fptr);
    fputc('s',fptr);
    fputc('h',fptr);
   

    printf("enter name :");
    scanf("%s",&name);

    fprintf(fptr,"%s", name);

    fclose(fptr);
return 0;
}