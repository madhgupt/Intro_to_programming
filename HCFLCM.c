#include<stdio.h>

int main() {

      int a , b , i , hcf = 1 , lcm , t ;

      printf("Enter two numbers\n" );
      scanf(" %d %d",&a ,&b);

      if (a > b) {
            t = a ;
            a = b ;
            b = t ;
      }

      for (i = 2 ; i <= a ; i++) {
            while (1) {
                  if ((a%i == 0) && (b%i == 0)) {
                        hcf = hcf * i ;
                        a = a/i ;
                        b = b/i ;
                  } else {
                        break ;
                  }
            }
      }

      printf("%d is the HCF\n", hcf );
      lcm = hcf * a * b;
      printf("%d is the LCM\n",lcm );
      return 0;

}
