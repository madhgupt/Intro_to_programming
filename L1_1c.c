#include<stdio.h>
#include <stdlib.h>
main() {

      char country1[10] , country2[10] , capital1[10] , capital2[10] ;

      printf("Enter the name of country 1 \t");
      scanf("%s", country1 );
      printf("Enter the name of it's capital \t");
      getchar() ;
      scanf("%[^\n]s", capital1 );
      printf("Enter the name of country 2 \t");
      scanf("%s", country2 );
      printf("Enter the name of it's capital \t");
      getchar() ;
      scanf("%[^\n]s", capital2 );

      printf("The capitals of %s and %s are %s and %s, respectively.\n", country1 , country2 , capital1 , capital2 );


}
