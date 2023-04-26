#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b,*ptr1,*ptr2,d;
    int n,i,j,k=0,m,c=0;
    gets(a);
    n=strlen(a);
    printf("length of string is : %d\n",n);
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if ((a[i]==a[j])&&(i!=j))
            {
                k=k+1;
            }
        } 
    }
    printf("word frequency is : %d\n",n-(k/2));
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if ((a[i]==a[j])&&(i!=j))
            {
                b=a[i];
                m=i;
                ptr1=&b;
                printf("first repeated character is : %c\n",*ptr1);
                c=1;
                break;
            }
            
        } 
        if (c==1)
        {
            break;
        }
    }
    if (c==0)
    {
        printf("No repeated characters found in the string.\n");
    }
    for(i=0;i<m;i++)
    {
        d=a[i];
        ptr2=&d;
        printf("First non-repeated character is: %c",*ptr2);
        break;
    }
    return 0;
}