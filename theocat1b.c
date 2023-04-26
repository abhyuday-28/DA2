#include<stdio.h>
int main()
{
    char k,str[100] ,up[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ", low[]="abcdefghijklmnopqrstuvwxyz",dig[]="0123456789";
    int i,j,n,c1=0,c2=0,c3=0,c4=0,c5=0,a[5];
    gets(str);
    n=(sizeof(str)-1)/sizeof(str[0]);
    n=strlen(str);
    for (i=0;i<n;i++)
    {
        k=str[i];
        for (j=0;j<26;j++)
        {
            if (k==up[j])
            {
                c1=c1+1;
            }
        }
        for (j=0;j<26;j++)
        {
            if (k==low[j])
            {
                c2=c2+1;
            }
        }
        for (j=0;j<10;j++)
        {
            if (k==dig[j])
            {
                c3=c3+1;
            }
        }
        if (k==' ')
        {
            c4=c4+1;
        }
        else
        {
            c5=c5+1;
        }
    }
    c5=c5-c1-c2-c3;
    a[0]=c1;
    a[1]=c2;
    a[2]=c3;
    a[3]=c4;
    a[4]=c5;
    for (i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
}