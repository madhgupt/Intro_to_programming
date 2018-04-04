#include <stdio.h>

int main(){

      int a[11] = {1,3,5,7,9,12,14,16,18,24,27} , n ,i ;



      int h=10 , l=0 ;

      printf("The number to look for\n");
      scanf("%d", &n);

      while (1) {
            printf("%d %d\n", h , l);
            if (a[(h+l)/2] == n || a[h]==n) {
                  printf("Yes\n" );
                  break;
            }
            if (a[(h+l)/2]>n) {
                  h = (h+l)/2;
            }
            if (a[(h+l)/2]<n) {
                  l = (h+l)/2;
            }
            if (h==l) {
                  printf("No\n" );
                  break;
            }
      }
}
