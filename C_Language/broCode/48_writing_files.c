#include <stdio.h>

int main(void)
{
  FILE *pF = fopen("test.txt", "w");  // a = append, w = write (overwrite)  
  // FILE *pF = fopen("C:\\Users\\user\\Desktop\\test.txt", "w");   when you need to specify the path

  fprintf(pF, "Spongebob Squarepants");

  fclose(pF);

  /* if you want to delete a file
  if(remove("test.txt") == 0)
  {
    printf("That file was deleted successfully!");
  }
  else 
  {
    printf("That file was NOT deleted");
  }
  */

  return 0;
}