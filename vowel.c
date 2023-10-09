#include<stdio.h>
void main()
{
    char b;
    printf("enter char");
    scanf("%c",&b);
    if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u'||b=='A'||b=='E'||b=='I'||b=='O'||b=='U')
    printf("it is vowel");
    else
    printf("it is consonent");

}