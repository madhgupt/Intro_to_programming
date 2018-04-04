#include <stdio.h>

int main(int argc, const char * argv[]) {

    int number , i , b = 0 , numbera ;

    printf("enter starting number\n");
    scanf(" %d", &number);
    printf("enter ending number\n");
    scanf(" %d", &numbera);
    printf("\n");

    while (1) {
        b = 0;

        for (i=2; i<number; i++) {
            if (number%i == 0) {
                b++;
            }
        }

        if (b == 0) {
            printf("%d\n", number);
        }

        number++ ;

        if (number >= numbera) {
            break;
        }
    }

    return 0;
}
