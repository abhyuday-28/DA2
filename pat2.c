#include<stdio.h>
#include<string.h>
int main()
{
    char k,str[100];
    int i,n,c1=0,c2=0,c3=0,c4=0,c5=0;
    gets(str);
    n=strlen(str);
    for (i=0;i<n;i++)
    {
        k=str[i];
        if (k>='A'&&k<='Z')
        {
            c1=c1+1;
        }
        else if (k>='a'&&k<='z')
        {
            c2=c2+1;
        }
        else if (k>='0'&&k<='9')
        {
            c3=c3+1;
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
    printf("%d\n",c1);
    printf("%d\n",c2);
    printf("%d\n",c3);
    printf("%d\n",c4);
    printf("%d\n",c5);
}