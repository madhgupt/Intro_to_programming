#include <stdio.h>
#include <string.h>

int main(){

      char a[20] , t;
      int k ;

      printf("enter a string\n");
      scanf("%s", a );

      printf("enter rotation\n");
      scanf("%d", &k );

      printf("%s\n", a );
      printf("%ld\n", strlen(a) );

      for(int i = 0 ; i < k ; i++){
            for(int u = 0 ; u < (strlen(a)-1) ; u++){
                  t = a[u];
                  a[u] = a[u+1];
                  a[u+1] = t;
            }
      }

      printf("the new string will be: %s\n", a );

}
