#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct network{
      char name[50];
      int id , *idf;
      int nof;
} p[16];

void intersection(int a[], int b[] , int m , int n );

int main(){

      int k=0  , i , u=0 , m , n;
      int id1 , id2 ;

      char rline[50];
      char d[4] , f[20] ;

      FILE *file = fopen("Network.txt" , "r");
      for ( i=0 ; i<16 ; i++) {
            fscanf(file , "%s %s %s"  , rline , d , f );
            strcpy(p[i].name , rline);
            p[i].id = atoi(d);

            u=0;
            p[i].idf = (int*)malloc(sizeof(int));
            while (u < strlen(f)) {
                  p[i].idf[k] =  0;
                  while (f[u] != ',') {
                        if (f[u] == '.') {
                              break;
                        }
                        p[i].idf[k] = p[i].idf[k]*10 + (f[u] - '0');
                        u++;
                  }
                  if (f[u] == '.') {
                        break;
                  }
                  if (f[u] == ',') {
                        k++;
                        p[i].idf = (int*)realloc(p[i].idf,(k+1)*sizeof(int));
                        u++;
                  }
            }
            p[i].nof = k+1;
            k=0;
      }
      fclose(file);

      printf("Enter ID 1: ");
      scanf("%d",&id1 );
      printf("Enter ID 2: ");
      scanf("%d",&id2 );

      intersection(p[id1-10].idf , p[id2-10].idf , p[id1-10].nof, p[id2-10].nof);

      return 0;
}

void intersection(int a[], int b[] , int m , int n ){

      int i , u , k = 0 , *c;
      c = (int*)malloc(sizeof(int));

      for (i = 0; i < m; i++) {
            for ( u = 0; u < n; u++) {
                  if (a[i] == b[u]) {
                        c = (int*)realloc(c ,(k+1)*sizeof(int));
                        c[k] = b[u];
                        k++;
                  }
            }
      }

      if (k==0) {
            printf("No Common Friends\n");
            exit (0);
      }

      printf("\nCommon Friends\n");
      printf("\n");
      for (i = 0; i < k; i++) {
            printf("%s\t", p[c[i]-10].name );
      }
      printf("\n\n");
}
