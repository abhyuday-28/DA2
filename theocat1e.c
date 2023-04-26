#include<stdio.h>
int function(int num ,char string[num]);
int main()
{
    char str[100];
    gets(str);
    str[0]=toupper(str[0]);
    int n,i,k;
    n=strlen(str);
    for (i=0;i<n;i++)
    {
        if(str[i]==' ')
        {
            k=i;
        }
    }
    for (i=k+1;i<n;i++)
    {
        str[i]=toupper(str[i]);
    }
    for (i=0;i<n;i++)
    {
        printf("%c",str[i]);
    }
    printf("\n%d",function(n,str));

}
int function(int num,char string[num])
{
    if (num<20)
    {
        return num;
    }
    else
    {
        return num*sizeof(string);
    }
}