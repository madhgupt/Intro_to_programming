#include <stdio.h>
#include <stdlib.h>

int main(){

      int n ,i,*a , *b , u;
      printf("enter the Number of rows\n" );
      scanf("%d", &n);

      a = (int*)malloc(sizeof(int));
      a[0] = 1;
      b = (int*)malloc(sizeof(int));
      b[0] = 1;
      for ( i = 0; i <= n; i++) {
            for ( u = 0; u < n-i; u++) {
                  printf("\t");
            }

            b = (int*)realloc(b,(i+1)*sizeof(int));
            b[i] = 1;
            //b[0]=1;

            if (i>=1) {
                  for ( u = 0; u < i; u++) {
                        b[u+1] = a[u] + a[u+1];
                        //printf("**%d**\n",b[u+1] );
                  }
            }
            a = (int*)realloc(a,(i+1)*sizeof(int));
            for ( u = 0; u < i; u++) {
                  a[u] = b[u];
                  //printf("**%d\n",a[u] );
            }
            //b[0]=1;
            for ( u = 0; u < i; u++) {
                  printf("%d\t\t", b[u]);
            }
            printf("\n\n");
      }
      printf("\n");

      free(a);
      free(b);
}
