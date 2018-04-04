#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct network
{
    char name[30];
    int ID;
    int friend_ID[40];
};
void intersection(int a[],int b[],int m,int n,int arr[],int max)
{
    int i,j,k,flag=-1,check=-1;
    for(int l=0;l<max;l++)
        arr[l]=-1;
    printf("\nThe common elements are : ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            flag=0;
            if(a[i]==b[j])
            {
                for(k=0;k<i;k++)
                    if(a[k]==a[i])
                    {
                        flag=1;
                        break;
                    }
                if(flag!=1)
                {
                    arr[i]=a[i];
                    check=1;
                    break;
                }
            }
        }
    }
    if(check!=1)
        {
            printf("\nNo friends in common\n");
            exit(0);
        }
    return;
}
char buff[100],sam[100];
int main()
{
    FILE *fp;
    fp=fopen("Network.txt","r");
    printf("\nEnter Person 1's ID \n");
    int id1,id2,flag1,flag2;
    int id=-1;
    scanf("%d",&id1);
    int i,j;
    struct network p1;
    struct network p2;
    char t[3];
    while(!feof(fp))
    {
        if(fgets(buff,99,fp)==NULL)
            break;

        for(i=0;buff[i]!=' ' && buff[i]!='\0';i++);
        i=i+1;
        strcpy(sam,buff);
        //id=(sam[i+1]-48)+((sam[i]-48)*10);
        char c=sam[0];
        //----------------------------------
        printf("%c",c);
        //----------------------------------
        if(id1==id)
            break;
    }
    p1.ID=id;
    for(i=0;buff[i]!=':';i++);
    i=i+2;
    flag1=-1;
    for(j=i;buff[j]!='.';j++)
    {
        for(int k=0;buff[j]!=' ';k++)
        {
            t[k]=buff[j];
            j++;
        }
        flag1++;
        p1.friend_ID[flag1]=(t[1]-'0')+((t[0]-'0')*10);
    }
    /*for(i=0;buff[i]!=' ';i++)
    {
        p1.name[i]=buff[i];
    }
    p1.name[i]='\0';
    */
    fseek(fp,0,SEEK_SET);
    printf("\nEnter Person 2's ID \n");
    scanf("%d",&id2);
    while(!feof(fp))
    {
        fgets(buff,99,fp);
        for(i=0;buff[i]!='\0';i++)
        {
            if(buff[i]==' ')
            {
                t[0]=buff[i+1];
                t[1]=buff[i+2];
                break;
            }
        }
        id=(t[1]-'0')+((t[0]-'0')*10);
        if(id2==id)
            break;
    }
    p2.ID=id;
    for(i=0;buff[i]!=':';i++);
    i=i+2;
    flag2=-1;
    for(j=i;buff[j]!='.';j++)
    {
        for(int k=0;buff[j]!=' ';k++)
        {
            t[k]=buff[j];
            j++;
        }
        flag2++;
        p2.friend_ID[flag2]=(t[1]-'0')+((t[0]-'0')*10);
    }
    fseek(fp,0,SEEK_SET);
    int max;
    if(flag1>flag2)
        max=flag1;
    else
        max=flag2;
    int common[max];
    intersection(p1.friend_ID,p2.friend_ID,flag1+1,flag2+1,common,max);
    for(int l=0;l<max;l++)
        if(common[l]!=-1)
            printf("\n%d ",common[l]);
    return 0;
}
