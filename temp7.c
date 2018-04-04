#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct network
{
    char name[25];
    int id;
    int fid[10];
};
int ct[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
void get(FILE *fp,struct network q[])
{
    int i;
    char tname[25],tid[5],tfid[25];
    for(int j=0;j<16;j++)
    {
        fscanf(fp,"%s%s%s",tname,tid,tfid);
        for(i=0;i<=strlen(tname);i++)
            q[j].name[i]=tname[i];
        q[j].id=((tid[0]-'0')*10)+(tid[1]-'0');
        for(i=0;tfid[i]!='\0';i++)
        {
            q[j].fid[ct[j]]=((tfid[i]-'0')*10)+(tfid[i+1]-'0');
            i=i+2;
            ct[j]++;
        }
    }
    return;
}
int find(struct network q[],int a[],int k)
{
    int i,flag=0;
    for(i=0;i<16;i++)
    {

        if(q[i].id==k)
        {
            for(int j=0;j<ct[i];j++)
            {
                a[j]=q[i].fid[j];
            }
            break;
        }
    }
    return ct[i];
}
void intersection(int a[],int b[],int m,int n,int arr[],int max)
{
    int i,j,k,flag=-1,check=-1;
    for(int l=0;l<max;l++)
        arr[l]=-1;
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
int main()
{
    FILE *fp=fopen("Network.txt","r");
    struct network p[16];
    int i;
    get(fp,p);
    fclose(fp);
    printf("\nEnter person 1's ID\n");
    int id1,id2;
    scanf("%d",&id1);
    printf("\nEnter person 2's ID\n");
    printf("HIHI");
    scanf("%d",&id2);
    int a1[10],b1[10];
    int c1=find(p,a1,id1);
    int c2=find(p,b1,id2);
    int max;
    if(c1>=c2)
        max=c1;
    else
        max=c2;
    int c[max];
    intersection(a1,b1,c1,c2,c,max);
    for(int l=0;l<max;i++)
    {
        if(c[l]!=-1)
        {
            printf("%d ",c[l]);
        }
    }
    printf("\nCommon friend(s) is/are \n ");
    for(int l=0;l<max;i++)
    {
        if(c[l]!=-1)
        {
            for(i=0;i<16;i++)
            if(p[i].id==c[l])
                printf("%s ",p[i].name);
        }
    }
    return 0;
}
