#include <stdio.h>
#include <math.h>

int main(){

      int n ;

      printf("enter a number\n");
      scanf("%d", &n );

      printf("i\tsin()\tcos()\ttan()\n");

      for(int i = 0 ; i < n ; i++){
            printf("%d\t%.2f\t%.2f\t%.2f\n", i+1 , sin(i*3.14/n) , cos(i*3.14/n), tan(i*3.14/n) );
      }
}
