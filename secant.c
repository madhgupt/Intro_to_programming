#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double getFunction(double a[] , double , int);

int main() {

      double x1 = -10 , x2 = 9 , tolerance = 0.0001 , m , error = 1;
      int n , i , k = 0;

      printf("Enter the degree of the polynomial\n");
      scanf("%d", &n);

      double a[n+1];

      printf("Enter the coeff. of the polynomial \n" );
      for (i = 0; i < n+1; i++) {
            printf("a%d:", i);
            scanf("%lf", &a[i]);
      }

      if (getFunction(a,x1,n) == 0) {
            printf("One of the real root of the equation is: %.2lf\n", x1 );
            exit(0);
      }
      if (getFunction(a,x2,n) == 0) {
            printf("One of the real root of the equation is: %.2lf\n", x2 );
            exit(0);
      }

      while (error>tolerance) {
            m = (getFunction(a, x2, n) - getFunction(a, x1, n))/(x2-x1);
            x1 = x2;
            x2 = x2 - (getFunction(a, x2, n))/m;
            error = fabs(x2-x1);

            if (isinf(x2)) {
                  printf("The polynomial does not have a real root\n");
                  exit(1);
            }
      }

      printf("One of the real root of the equation is: %.2lf\n", x2 );
      return 0;
}

double getFunction(double a[] , double x , int n) {
      double p = 0;
      int k;

      for (k=0; k < n+1; k++) {
            p = p + a[k]*pow(x, k);
      }

      return p;
}
