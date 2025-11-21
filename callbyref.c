//write a function which will multiply three numbers  and call it by reference!
#include<stdio.h>
void product(int *a,int *b,int *c)
{
    int prod= (*a)*(*b)*(*c);
    printf("%d\n",prod);
}
void main()
{
    int a=5;
    int b=6;
    int c=87;
    
    product(&a,&b,&c);
}