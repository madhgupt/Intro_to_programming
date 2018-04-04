#include <stdio.h>

struct point{
      float x , y;
};


int main() {

      int n , i ;

      printf("how many points\n" );
      scanf("%d", &n );

      struct point p[n];

      for ( i = 0; i < n; i++) {
            printf("enter the point %d\n", i+1 );
            printf("x: " );
            scanf("%f", &p[i].x);
            printf("y: " );
            scanf("%f", &p[i].y);
      }

      for ( i = 0; i < n; i++) {
            printf("%.2f,%.2f\t", p[i].x , p[i].y );
      }
      printf("\n");
}
