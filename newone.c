//write a c  program with a function with varodic argument!
#include<stdio.h>
#include<stdarg.h>
void display(int count,...)
{
    int result=0;
    va_list bag;
    va_start (bag,count);
    for(int i=1;i<=count;i++)
    {
        int n=va_arg(bag,int);
        result=result+n;
    }
        va_end(bag);
        printf("%d",result);
    
}
void main()
{
    display(6,45,21,34,56,76,10);
}