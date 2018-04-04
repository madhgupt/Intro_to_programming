#include <stdio.h>
#include <math.h>

int main() {

      int a , b  , c = 0 , i = 2 , t ;

      scanf("%d%d",&a,&b );

      if(a > b){
            t = b;
            b = a;
            a = t;
      }

      while (i <= (int)sqrt(a)) {
            if ( (a%i == 0) && (b%i == 0) ) {
                  c++ ;
                  break ;
            }

            i++ ;
      }

      if (c == 0) {
            printf("a and b are coprime\n" );
      } else {
            printf("a and b are not coprime\n" );
      }

}
