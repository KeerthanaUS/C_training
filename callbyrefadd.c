//write a c program which will add three numbers and call it by reference!
#include<stdio.h>
void addition(int *a,int *b,int *c)
{
    int sum= *a + *b + *c;
    printf("%d\n",sum);
}
void main()
{
    
    int a=43;
    int b=23;
    int c=56;
    addition(&a,&b,&c);
}