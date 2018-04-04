#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 int main() {
      FILE *fp;
      int i=0;
      fp = fopen("words.txt","r");

      if(fp == NULL)
      {
            printf("The file ...\n");
            exit(1);
      }

      char word[40] , ch;

      while (!feof(fp)) {
            ch = fgetc(fp);
            ch = fgetc(fp);
            while (ch != '"' ) {
                  word[i] = ch;
                  ch = fgetc(fp);
                  i++;
            }
            i=0;
            ch = fgetc(fp);
            printf("%s\n", word);
      }

      return 0;
}
