#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//void printIntersection(struct network z[]);
struct network{
	char name[30];
	int ID;
	int friendIDs[6];
};

int main(){

      FILE *fp = fopen("Network.txt" , "r");

	char ch;
	int count;

	int ID1,ID2;

	struct network person[16];

	if(fp == NULL){
		printf("The file doesn't exist\n");
		exit(0);
	}

	int friendsCount=0;

      ch='a';
	for (int i = 0; i <16; ++i){
		count = 0;
		while(ch!=' '){
			ch = fgetc(fp);
			person[i].name[count] = ch;
			//printf("%c",person[i].name[count]);
			count++;
		}
            person[i].name[count]='\0';

            fscanf(fp,"%d",&person[i].ID);
            //printf("%d\t\t\t",person[i].ID);
		ch = getc(fp);
		count = 0;

		while(ch!='.'){
                  fscanf(fp,"%d",&person[i].friendIDs[count]);
                  //printf("%d\t",person[i].friendIDs[count]);
                  ch = getc(fp);
                  count++;
		}

	}

	fclose(fp);
	return 0;
}


void printIntersection(struct network x[]){

	int count=0;

      for (int i = 1; i <=n; ++i){
		for (int j = 1; j <=m; ++j){
			if(x[i]==y[j]){
				printf("The common elements are:\n");
				printf("%d\n",x[i]);
				count++;
			}

			if(i==n && j==m && count == 0){
				printf("No common elements\n");
			}
		}
	}
}
