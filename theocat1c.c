#include<stdio.h>
int fact(int number);
int func(int num);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d", func(n));
}
int fact (int number)
{
    if (number-1>0)
    {
        return number*fact(number-1);
    }
    else
    {
        return 1;
    }
}
int func (int num)
{
    if (num>0)
    {
        return fact(num)/num + func(num-1);
    }
    else
    {
        return 0;
    }
}