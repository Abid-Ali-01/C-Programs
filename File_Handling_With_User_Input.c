#include<stdio.h>
#include<stdlib.h>

int main(){

  FILE *file;
  char userinput[256];
  file = fopen("MyTextFile.txt", "w");
  if (file == NULL){
  
    printf("File could not be created");
    return 1;
  }


printf("Write in File\n");
fgets(userinput, sizeof(userinput), stdin);
fprintf(file, "%s", userinput);


  fclose(file);
  
    printf("File created and written successfully");


file = fopen("MyTextFile.txt", "r");
  if (file == NULL){
  
    printf("File Not Found");
    return 1;
  }


char myfile[256] ;
while (fgets(myfile, sizeof(myfile), file) != NULL)
{
    printf("%s", myfile);
}
return 0;
}