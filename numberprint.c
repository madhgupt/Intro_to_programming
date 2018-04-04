#include <stdio.h>

int main() {

      int a , count , i , u = 1;

      scanf(" %d", &a );

      for ( i = 1 ; i <= a ; i++) {
            for (count = 1 ; count <= i ; count++) {
                  printf("%d\t", u );
                  u++ ;
            }
            printf("\n" );
      }
}
