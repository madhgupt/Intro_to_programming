#include <stdio.h>
#include <math.h>

int main(){

      int a , b , bb , c;

      printf("enter the two numbers\n");
      scanf("%d %d", &a , &b );

      bb = pow(2 , b-1);
      c = a&bb ;
      c = a>>(bb-1) ;
      
      if (c == 1) {
            printf("the bit is one\n");
      } else{
            printf("the bit is zero\n");
      }

}
