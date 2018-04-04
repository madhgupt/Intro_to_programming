#include <stdio.h>

int main(){

      int num , *ptr1 = &num ,*ptr2 = &num;

      printf("%p %p\n", ptr1, ptr2 );

      *ptr1 = 100;
      printf("%d\n", *ptr2 );
}
