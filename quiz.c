#include <stdio.h>

main(){

      char Answer[1] ;
      int point = 0 ;

      printf("Lets paly a quiz\n\n" );
      printf("Enter the correct Answer\n\n" );

      printf("Ques 1: What is the capital of UP\n" );

      printf("A) Lacknow\tB) Kanpur\n" );
      printf("C) Agra\tD) Noida\n" );

      scanf("%s" , Answer );

      if (Answer[0] == 'a' || Answer[0] == 'A') {
            printf("correct Answer\n" );
            point++ ;
      } else {
            printf("Sorry Wrong Answer\n" );
      }

      printf("\n\n" );
      printf("Ques 2: 3 + 4 + 5\n" );

      printf("A) 10 \tB) 11\n" );
      printf("C) 12\tD) 13\n" );

      scanf("%s", Answer );

      if (Answer[0] == 'C' || Answer[0] == 'c') {
            printf("correct Answer\n" );
            point++ ;
      } else {
            printf("Sorry Wrong Answer\n" );
      }

      printf("\nFinal points: %d\n", point );
}
