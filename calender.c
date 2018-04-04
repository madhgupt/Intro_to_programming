#include <stdio.h>

main(){

      int year , N , leap , day ;

      printf("Enter year: " );
      scanf(" %d", &year );

      N = year - 1900 ;
      leap = (N - 1)/4 ;
      N = N + leap ;
      day = N % 7 ;

      if (day == 0) {
            printf("The day was Monday \n" );
      } else if (day == 1) {
            printf("The day was Tuesday \n" );
      } else if (day == 2) {
            printf("The day was Wednesday \n" );
      } else if (day == 3) {
            printf("The day was Thursday \n" );
      } else if (day == 4) {
            printf("The day was Friday \n" );
      } else if (day == 5) {
            printf("The day was Saturday \n" );
      } else if (day == 6) {
            printf("The day was Sunday \n" );
      }

}
