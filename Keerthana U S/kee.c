//write a function which will two input parameters x,y and returns x2+y2!#
#include<stdio.h>
int mysqrt(int x,int y)
{
    int sum=x*x + y*y;
    return sum;
}
int main()
{
    int x=2; 
    int y=2;
    printf("%d\n",mysqrt(x,y));
    int b=1;
    int c=1;
    printf("%d\n",mysqrt(b,c));
}
