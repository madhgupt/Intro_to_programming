#include <stdio.h>
#include <math.h>

double getFunction(double a[] , double , double);
double getDerivative(double a[] , double , double);

int main()
{

      double x = 1 , xp , error = 1;;
      int n , i ;

      printf("Enter the degree of the polynomial\n");
      scanf("%d", &n );

      double a[n+1];
      printf("Enter the coefficients\n");
      for (i = 0; i <= n; i++) {
            printf("Enter the value of a%d: \n", i );
            scanf("%lf", &a[i]);
      }

      while (error > 0.0001)
      {
            xp = x;
            x = x - (getFunction(a,n,x)/getDerivative(a,n,x));
            printf("%lf\n", x);
            error = fabs(x-xp);
      }

      printf("One of the real root of the equation is: %.2lf\n", x );
      return 0;
}

double getFunction(double a[],double n,double x){
	int i;
	double p = 0;
	for( i = 0;i <= n;i++){
		p = p + a[i]*(pow(x,i));
	}
	return p;
}

double getDerivative(double a[],double n,double x){
	int i;
	double q=0;
	for( i = 0 ; i <= n ; i++ ){
		q = q + i*a[i]*(pow(x,i-1));
	}
	return q;
}
