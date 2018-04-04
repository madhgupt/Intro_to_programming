#include <stdio.h>

int main() {

      int n , i , u , temp;
      printf("How many numbers\n");
      scanf("%d", &n );

      int num[n];

      for (i = 0; i < n; i++) {
            scanf("%d", &num[i] );
      }

      printf("\nBefore sorting\n\n");
      for ( i = 0; i < n; i++) {
            printf("%d\t", num[i] );
      }
      printf("\n\n");

      int flag;
      for ( i = 0; i < n-1; i++) {
            flag = 0;
            for ( u = 0; u < n-i-1 ; u++) {
                  if (num[u]>num[u+1]) {
                        temp = num[u];
                        num[u] = num[u+1];
                        num[u+1] = temp;
                        flag = 1;
                  }
            }
            if (flag == 0) {
                  break;
            }
      }

      printf("After sorting\n\n");
      for ( i = 0; i < n; i++) {
            printf("%d\t", num[i]);
      }
      printf("\n\n");
}
