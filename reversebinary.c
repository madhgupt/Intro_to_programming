#include <stdio.h>

int main(){

      int num , numr = 0 , br = 0 ;

      printf("enter any number\n" );
      scanf("%d", &num );

      while (num >= 1) {
            numr = numr * 10 ;
            numr = numr + num % 10 ;
            num = num/10 ;
      }

      printf("%d\n", numr );

      while (numr >= 1){
            printf("%d", numr%2 );
            numr = numr/2 ;
      }

      printf("\n");

}
