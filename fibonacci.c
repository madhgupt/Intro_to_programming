#include <stdio.h>

int factorial(int n){
      if(n!=1){
      int a = n*factorial(n-1);
      return a;
      }
      else return 1;
}

int main(){

      printf("%d\n", factorial(5));












}
