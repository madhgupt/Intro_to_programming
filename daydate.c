#include <stdio.h>

int main() {

      int date , day , month , year , N , leap , c = 0 ;
      int mm[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31} , dd = 0;

      printf("Enter any date(DDMMYYYY)\n" );

      while(1) {
            scanf("%d", &date );

            year = date%10000;
            date = date/10000;
            month = date%100;
            date = date/100;

            N = year-1 ;
            leap = (N)/4 - (N)/100 + (N)/400;
            N = N + leap ;

            if (year%4 == 0) {
                  mm[2] = 29;
                  if (year%100 == 0) {
                        mm[2] = 28;
                  }
                  if (year%400 == 0) {
                        mm[2] = 29;
                  }
            }

            if (month > 12 || month <= 0) {
                  c = 1;
            }
            if (date > mm[month]) {
                  c = 1;
            }
            if (c == 0) {
                  break;
            }
            printf("--Enter a valid date--\n");
            c = 0;
      }

      for (int i = 0; i < month; i++) {
            dd = dd + mm[i];
      }
      dd = dd + date ;
      day = (N + dd - 1)%7;

      printf("\nOn %d/%d/%d the day was: ", date, month , year);
      if (day == 0) {
            printf("Monday \n" );
      } else if (day == 1) {
            printf("Tuesday \n" );
      } else if (day == 2) {
            printf("Wednesday \n" );
      } else if (day == 3) {
            printf("Thursday \n" );
      } else if (day == 4) {
            printf("Friday \n" );
      } else if (day == 5) {
            printf("Saturday \n" );
      } else if (day == 6) {
            printf("Sunday \n" );
      }

      printf("\n");

      return 0;
}
