#include <stdio.h>

int main() {

      int num , t = 0 ;

      scanf(" %d", &num );

      while (num >= 1) {
            t = t*10 + num % 10 ;
            num = num/10 ;
      }

      printf("%d\n", t ) ;

}
