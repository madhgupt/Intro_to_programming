#include <stdio.h>

int sum(int) ;

int main(){

      int n , p;

      printf("enter how many numbers\n");
      scanf("%d", &n );

      p = sum(n) ;

      printf("Sum = %d\n", p );

}

int sum(int n){

      int i , t ,s ;

      s = 0 ;

      printf("Enter %d numbers\n", n);

      for( i=0 ; i < n ; i++ ){
            scanf("%d", &t ) ;
            s = s + t ;
      }

      return s ;

}
