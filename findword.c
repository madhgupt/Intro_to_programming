#include <stdio.h>
#include <string.h>

int main(){

      int n , i;
      printf("Enter the Dimention of the Matrix\n");
      scanf("%d", &n);

      char mat[n][n];

      printf("Pls enter the Matrix\n");
      for(i = 0;i<n;i++){
            printf("Enter word %d\n", i+1);
            scanf("%s", mat[i]);
      }
      printf("\n\n\n" );
      for ( i = 0; i < n; i++) {
            printf("%s\n", mat[i]);
      }

      






}
