#include <stdio.h>

int main() {

      int a[2][3][4] , i , u , k;
      int* p = a[0][0];

      printf("%p\n",p );

      for (i = 0; i < 2; i++) {
            for ( u = 0; u < 3; u++) {
                  for ( k = 0; k < 4; k++) {
                        printf("the address of the cell a[%d][%d][%d] is %p\n", i , u , k , &a[i][u][k]);
                  }
            }
      }
}
