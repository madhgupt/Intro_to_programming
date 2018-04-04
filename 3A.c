#include <stdio.h>
#include <stdlib.h>

void intersection(int a[] , int b[] , int m , int n);

int main() {

      int m , n , i ;

      printf("Enter the first array size\n");
      scanf("%d", &m );

      printf("Enter the Second array size\n");
      scanf("%d", &n );

      int a[m] , b[n] ;

      for ( i = 0; i < m; i++) {
            printf("a%d: ", i );
            scanf("%d", &a[i]);
      }
      printf("\n");
      for ( i = 0; i < n; i++) {
            printf("b%d: ", i );
            scanf("%d", &b[i]);
      }

      intersection(a , b , m , n );

      return 0;
}

void intersection(int a[], int b[] , int m,  int n ){

      int i , u , k = 0 , *c ,z ,flag;

      c = (int*)malloc(sizeof(int));

      for (i = 0; i < m; i++) {
            for ( u = 0; u < n; u++) {
                  if (a[i] == b[u]) {
                        flag = 0;
                        for (z = 0; z < k; z++) {
                              if (a[i] == c[z]) {
                                    flag = 1;
                              }
                        }

                        if (flag == 1) {
                              break;
                        }
                        c = (int*)realloc(c ,(k+1)*sizeof(int));
                        c[k] = b[u];
                        k++;
                  }
            }
      }

      for ( i = 0; i < k; i++) {
            printf("%d\t", c[i] );
      }
      printf("\n");
}
