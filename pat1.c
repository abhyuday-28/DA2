#include<stdio.h>
int prime(int num);
int armstrong(int num);
int perfect(int num);
int main()
{
    int n;
    printf("enter a positive number : ");
    scanf("%d",&n);
    prime(n);
    armstrong(n);
    perfect(n);
    return 0;
}
prime (int num)
{
    int i;
    for (i=2;i<=(num/2)+1;i++)
    {
        if (num%i==0)
        {
            printf("%d is not prime\n",num);
            break;
        }
        else if (i==(num/2)+1)
        {
            printf("%d is a prime number\n",num);
        }
    }
}
armstrong(int num)
{
    int q,r,s=0;
    while (q>0)
    {
        r=q%10;
        s=s+(r*r);
        q=q/10;
    }
    if (s==num)
    {
        printf("%d is an Armstrong number\n",num);
    }
    else
    {
        printf("%d is not an Armstrong number\n",num);
    }
}
perfect(int num)
{
    int i,k=0;
    for (i=1;i<num;i++)
    {
        if (num%i==0)
        {
            k=k+i;
        }
    }
    if (k==num)
    {
        printf("%d is a perfect number\n",num);
    }
    else
    {
        printf("%d is not a perfect number\n",num);
    }
}