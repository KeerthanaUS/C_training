#include<stdio.h>
void main()
{
    int arr[4]={15,62,78,1};
    int *p=arr;
    printf("%d", *p);
    printf("%d",*(p+1));
    printf("%d",*(p+2));
    printf("%d",*(p+3));
}