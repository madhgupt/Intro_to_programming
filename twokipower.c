#include <stdio.h>

int main() {

      int num , i , c = 0 ;

      scanf(" %d", &num );

      while (num != 1) {
            if (num % 2 == 0){
                  num = num/2 ;
            } else {
                  c = 1 ;
                  break ;
            }

            i++ ;
      }

      if (c == 0) {
            printf("perfect power\n" );
      } else {
            printf("not a perfect power\n" );
      }

}
