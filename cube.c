#include<stdio.h>
void main()
{
    int i,num;
    printf("enter the number we want to find cube");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("cube=%d",i*i*i);
    }
}