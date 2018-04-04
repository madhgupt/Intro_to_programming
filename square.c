#include <stdio.h>

main() {

      int num , a ;
      printf("Enter any Number\n" );

      while(1){
            scanf(" %d", &num );

            if (num <= 0) {
                  printf("Enter a positive Number\n" );
            } else{
                  break ;
            }
      }

      a = 1 ;

      while (1) {
            if (num >= a*a) {
                  printf("%d\t" , a*a );
            } else{
                  break ;
            }

            a++ ;
      }

      printf("\n" );

}
