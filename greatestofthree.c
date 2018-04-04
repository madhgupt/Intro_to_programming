#include <stdio.h>

int main() {

      int num[3] , t , i  ;

      printf("enter three numbers\n" );

      for (i = 0; i < 3; i++) {
            scanf("%d", &num[i] );
      }

      i = 0 ;

      while (1) {
            if (num[i] > num[i+1]) {
                  t = num[i] ;
                  num[i] = num[i+1] ;
                  num[i+1] = t ;
            }

            i++ ;
            if (i==2) {
                  break;
            }
      }

      printf("the largest of the three is %d\n", num[2] );
      return 0 ;

}
