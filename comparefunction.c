#include <stdio.h>
#include <math.h>
#define PIE 3.14159265358979323

int main(){

      long double x , p = 1 ;
      int i ;
      long int k = 1 ;

      printf("enter X\n" );
      scanf("%Lf", &x );

      for(i=1 ; i<20 ; i++){
            k = k*i ;
            p = p + (pow(x,i)/k) ;
            //printf("%Lf %Lf %ld\n", x , p , k );
      }
      printf("Math.h\t\t\tTaylor\n" );
      printf("%f\t\t%Lf\n", exp(x) , p );

      double q = 0 ;

      for(i=1 ; i<10000 ; i=i+2){

            q += (pow((x-1)/(x+1),i)/i) ;
            //printf("%Lf %f %d\n", x , q , i );
      }
      //printf("\nexp(x)\t\t\tex\n" );
      printf("%f\t\t%f\n", log(x) , 2*q );

      long double r=0.0 , s = 1 ;
      int w = 1 , u = 1 ;
      int y=x/(2*PIE);
      x=x-y*2*PIE;

      for(i=1 ; i < 41 ; i+=2){
            s = s*(x/u) ;
            u++ ;
            r = r + s*w ;
            //printf("%Lf\t\t %Lf \t\t%Lf\n", x , r , s );
            s = s*(x/u) ;
            u++ ;
            w=-w;
      }

      //printf("exp(x)\t\t\tex\n" );
      printf("%f\t\t%Lf\n", sin(x) , r );

}
