#include<stdio.h>
void fibo(int n)
{
    int a=0;
    int b=1;
    int i;
    int sum;
    for( i=0;i<n ;i++)
    {
    

        printf("%d",a);
    sum=a+b;
        
        a=b;
        b=sum;

    }

}
   

int main()
    {
        int n;
    printf("enter the fibo number");
    scanf("%d",&n);
    fibo(n);
    return 0;
}

