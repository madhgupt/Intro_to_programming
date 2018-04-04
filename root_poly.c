#include <stdio.h>
#include <math.h>

double getFunction(double);
double getDerivative(double);

int main() {

      double x = 100 , xp , tolerance , error=1;
      int i = 0 ;

      tolerance = pow(10,-6);

      while ((error>tolerance)) {
            xp = x;
            x = x - getDerivative(x)/getFunction(x);
            error = fabs(x-xp);
            printf("%lf\n", x);
      }

      printf("One of the real root of the eqn. is %lf\n", x );
      return 0;
}

double getFunction(double x) {
      double p = 3.6 - 2.5*x + pow(x,3);
      return p;
}

double getDerivative(double x) {
      double g = -2.5 + 3*pow(x,2);
      return g;
}
