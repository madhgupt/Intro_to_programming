#include <stdio.h>
#include <string.h>

int main(){

      char string[100] ;
      int v[5] , largest , i ;

      for (i=0 ; i<5 ; i++) {
            v[i] = 0 ;
      }

      printf("enter any sentence\n");
      scanf("%[^\n]s" , string);

      for (i=0 ; i<strlen(string) ; i++){
            if (string[i]=='a' || string[i]=='A') {
                  v[0]++ ;
            } else if (string[i]=='e' || string[i]=='E') {
                  v[1]++ ;
            } else if (string[i]=='i' || string[i]=='I') {
                  v[2]++ ;
            } else if (string[i]=='o' || string[i]=='O') {
                  v[3]++ ;
            } else if (string[i]=='u' || string[i]=='U') {
                  v[4]++ ;
            }
      }

      largest = v[0] ;

      for (i=0 ; i < 5 ; i++) {
            if (v[i]>largest) {
                  largest = v[i] ;
            }
      }

      printf("\n");

      while (largest>0) {
            if (v[0] == largest) {
                  printf("*");
                  v[0]-- ;
            } else {
                  printf(" ");
            }

            if (v[1] == largest) {
                  printf("*");
                  v[1]-- ;
            } else {
                  printf(" ");
            }

            if (v[2] == largest) {
                  printf("*");
                  v[2]-- ;
            } else {
                  printf(" ");
            }

            if (v[3] == largest) {
                  printf("*");
                  v[3]-- ;
            } else {
                  printf(" ");
            }

            if (v[4] == largest) {
                  printf("*");
                  v[4]-- ;
            } else {
                  printf(" ");
            }

            printf("\n");

            largest-- ;
      }

      printf("AEIOU\n");

}
