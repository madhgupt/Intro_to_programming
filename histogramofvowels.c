#include <stdio.h>
#include <string.h>

int main(){

      char s[100];
      int a[5] ;
      int l , k;

      for (k=0 ; k<5 ; k++) {
            a[k] = 0 ;
      }

      printf("enter any string\n");
      scanf("%[^\n]s" , s);

      printf("%s\n", s);

      for (k=0 ; k<strlen(s) ; k++){
            if (s[k]=='a' || s[k]=='A') {
                  a[0]++ ;
            } else if (s[k]=='e' || s[k]=='E') {
                  a[1]++ ;
            } else if (s[k]=='i' || s[k]=='I') {
                  a[2]++ ;
            } else if (s[k]=='o' || s[k]=='O') {
                  a[3]++ ;
            } else if (s[k]=='u' || s[k]=='U') {
                  a[4]++ ;
            }
      }

      l = a[0] ;

      for (k=0 ; k < 5 ; k++) {
            if (a[k]>l) {
                  l = a[k] ;
            }
      }

      printf("\n");

      while (l>0) {
            if (a[0] == l) {
                  printf("*");
                  a[0]-- ;
            } else {
                  printf(" ");
            }

            if (a[1] == l) {
                  printf("*");
                  a[1]-- ;
            } else {
                  printf(" ");
            }

            if (a[2] == l) {
                  printf("*");
                  a[2]-- ;
            } else {
                  printf(" ");
            }

            if (a[3] == l) {
                  printf("*");
                  a[3]-- ;
            } else {
                  printf(" ");
            }

            if (a[4] == l) {
                  printf("*");
                  a[4]-- ;
            } else {
                  printf(" ");
            }

            printf("\n");

            l-- ;
      }

      printf("AEIOU\n");

}
