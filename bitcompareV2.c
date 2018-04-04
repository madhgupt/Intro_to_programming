#include <stdio.h>

void bit(int, int) ;

int main(){

      int a , b;

      printf("enter the two numbers\n");
      scanf("%d %d", &a , &b );

      bit(a , b);

}

void bit(int a , int b){

      if ((a>>(b-1))%2 == 0) {
            printf("the bit is zero\n");
      } else {
            printf("the bit is one\n");
      }

}
