#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

      char a[100];
      int count=0;

      printf("Enter a string\n" );
      scanf("%[^\n]s", a);

      for (int i=0 ; i<strlen(a); i++) {
                  if (a[i] != ' ') {
                        a[count] = a[i];
                        count++;
                  }
      }
      a[count]=  '\0';

      printf("%s\n", a );




}
