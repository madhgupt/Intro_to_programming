#include <stdio.h>
#include <stdlib.h>

int main() {

      int n=0 , i , u , temp;
      int *num;

      num = (int*)malloc(sizeof(int));
      while (getchar() != 'y') {
            num = (int*)realloc(num, (n+1)*sizeof(int));
            scanf("%d", &num[n] );
            n++;
      }
      n--;
      printf("\n%d\n", n);

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
