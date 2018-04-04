#include<stdio.h>

int main(){
      int count = 0 , size;
      char ch;
      FILE *fp = fopen("capitals.txt" , "r");

      while(!feof(fp)){
            ch = fgetc(fp);
            if (ch!= '\0') 
            count++;

      }
      size = ftell(fp);
      fclose(fp);



printf("The size of File is %d bytes\n", count  );
printf("%d\n", size);


}
