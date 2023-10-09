#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d,e;
    printf("distance between number");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=sqrt((b-a)*(b-a)+(d-c)*(d-c));
    printf("distance betwwen numbers=%d",e);
}