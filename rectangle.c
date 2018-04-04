#include <stdio.h>

void rectangle(int , int) ;

int main(){

      int m , n ;

      printf("enter m and n\n");
      scanf("%d %d", &m, &n);

      rectangle(m ,n) ;

}

void rectangle(int m, int n) {

      int i , u ;

      for(i = 0; i < m ; i++){
            printf("*");
      }

      printf("\n");

      for(i = 0; i < (n-2); i++){
            printf("*");
            for(u = 0; u < (m-2); u++){
                  printf(" ");
            }
            printf("*");
            printf("\n");
      }

      for(i = 0; i < m ; i++){
            printf("*");
      }
      printf("\n");
}
