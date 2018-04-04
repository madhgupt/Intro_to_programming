#include <stdio.h>

int main() {

      int num ;
      long int f = 1 ;

      printf("enter any numbers\n" );
      scanf(" %d", &num );

      for (int i = 1; i <= num; i++) {
            f = f * i ;
      }

      printf("The factorial of %d is %ld\n", num , f );

}
