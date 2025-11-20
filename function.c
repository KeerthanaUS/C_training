#include<stdio.h>
int myadd (int a,int b)
{
    int sum =a+b;
    return sum;
}
void main()
{
    int a=10,b=5;
    printf("%d\n", myadd(a,b));
    int c=2,d=6;
    printf("%d\n",myadd(c,d));

}
