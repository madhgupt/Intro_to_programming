#include <stdio.h>
#include <string.h>

int main() {

      char word[50] ;
      int a ;

      printf("Enter any word\n");
      scanf("%s", word );
      printf("enter a number\n");
      scanf("%d",  &a);

      for (int i = 0 ; i < strlen(word) ; i++) {
            if(word[i] > 96 && word[i] < 123){
                  word[i] = word[i] + a ;
                  if (word[i] > 122){
                        word[i] = word[i] - 26 ;
                  }
                  if (word[i] < 97) {
                        word[i] = word[i] + 26 ;
                  }
            }
            if(word[i] > 64 && word[i] < 91){
                  word[i] = word[i] + a ;
                  if (word[i] > 90){
                        word[i] = word[i] - 26 ;
                  }
                  if (word[i] < 65) {
                        word[i] = word[i] + 26 ;
                  }
            }
      }

      printf("%s\n" , word );

}
