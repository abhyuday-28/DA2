#include<stdio.h>
int main()
{
    char type_of_car[10];
    int total,price_of_car,extra_fitting_price,discount;
    double dis,gst,net;
    gets(type_of_car);
    scanf("%d %d",&price_of_car,&extra_fitting_price);
    if(strcmp(type_of_car,"Hatchback")==0)
    {
        discount=3;
    }
    else if(strcmp(type_of_car,"Sedan")==0)
    {
        discount=5;
    }
    else if(strcmp(type_of_car,"SUV")==0)
    {
        discount=10;
    }
    else if(strcmp(type_of_car,"MUV")==0)
    {
        discount=15;
    }
    total=price_of_car+extra_fitting_price;
    dis=total*discount/100;
    gst=(total-dis)*0.12;
    net=total-dis+gst;
    printf("net amount to be paid : %.2lf",net);
}