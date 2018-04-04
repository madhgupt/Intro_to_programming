#include <stdio.h>

int main() {

      int a[8] , b , i ;

      printf("enter 8 numbers\n");

      for(i = 0 ; i < 8 ; i++){
            scanf("%d", &a[i] );
      }

      b = a[0] ;

      for(i = 0 ; i < 8 ; i++){
            if (b <= a[i]) {
                  b = a[i] ;
            }
      }

      printf("greatest of 8 is %d\n", b );

}
