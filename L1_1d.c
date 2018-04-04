#include <stdio.h>

int main(int argc, char const *argv[]) {

char name[20] ;

      printf("What is your name " );
      scanf("%s", name );

      name[0] = 'Z' ;

      printf("Hello %s \n", name  );

      return 0;
}
