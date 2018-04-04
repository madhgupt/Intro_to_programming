#include <stdio.h>
int	main()
{
      int date,month,year,count;
      int day,leap,yearCount,dayCount;
      int months[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

      dayCount = 0;
      count = 1;

      while(count != 0){
      	printf("Enter a date:");
      	scanf("%d",&date);
      	printf("Enter month:");
      	scanf("%d",&month);
      	printf("Enter the year:");
      	scanf("%d",&year);

            count = 0;

            if(year%4 == 0)
            {
                  if( year%100 == 0)
                  {
                        if ( year%400 == 0)
                        {
                              months[2]=29;
                        }
                        else
                        {
                              months[2]=28;
                        }
                  }
                  else
                  {
                        months[2]=29;
                  }
            }
            else
            {
                  months[2]=28;
            }

            if (date > months[month])
            {
                  count = 1;
            }
            if (month > 12 || month <= 0)
            {
                  count = 1;
            }
            if (count != 0)
            {
            printf("The Entered date is invalid\n");
            }
      }

      printf("The date you entered is %d|%d|%d\n",date,month,year);


      yearCount = year-1;
      leap= (yearCount)/4 -(yearCount)/100 +(yearCount)/400;
      yearCount = yearCount + leap;

      for (int i = 0; i < month; i++){
            dayCount = dayCount + months[i];
      }

      dayCount = dayCount + date ;
      day = (yearCount + dayCount - 1)%7;


      if (day == 0)
      {
            printf("The day is Monday \n" );
      }
       else if (day == 1)
      {
            printf("The day is Tuesday \n" );
      }
      else if (day == 2)
      {
            printf("The day is Wednesday \n" );
      }
      else if (day == 3)
      {
            printf("The day is Thursday \n" );
      }
      else if (day == 4)
      {
            printf("The day is Friday \n" );
      }
      else if (day == 5)
      {
            printf("The day is Saturday \n" );
      }
      else if (day == 6)
      {
            printf("The day is Sunday \n" );
      }

      return 0;
}
