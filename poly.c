#include <stdio.h>
#include <math.h>

double evaluatePolynomial(double , double , double) ;

int main() {

      double n , p = 0 , x ;

      printf("Enter the order if the polynomial\n");
      scanf("%lf", &n );
      printf("enter the value of x\n");
      scanf("%lf", &x );

      p = evaluatePolynomial(p , n , x) ;

      printf("The value of P(x) at %.2lf is %.2lf\n", x , p );

      return 0 ;
}

double evaluatePolynomial(double p , double n , double x) {

      int i ;
      double a ;

      printf("enter the value of coeff.\n");

      for (i = 0; i <= n ; i++) {
            printf("a%d: ", i );
            scanf("%lf", &a );
            p = p + (a*pow(x , i));
      }

      return p ;
}
