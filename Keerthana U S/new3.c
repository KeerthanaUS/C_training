//write a c function which will accept an array,its size as n and returns the difference between first and last element!
#include<stdio.h>
#include<stdlib.h>

int sub_arr (int arr[],int n)
{
    int sub=arr[0]-arr[n-1];
    return abs(sub);
}

void main()
{
    int arr[5]={2,4,6,8,5};
    int n=5;
    printf("%d",sub_arr(arr,n));
}