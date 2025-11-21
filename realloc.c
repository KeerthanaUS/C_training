#include<stdio.h>
#include<stdlib.h>
void main()
{
   
       int *p=(int*)calloc(3,sizeof(int));
  p[0]=12;
  p[1]=1;
  p[2]=83;
 //increase size of 5 integer
    p=(int*) realloc(p,5*sizeof(int));
    p[3]=8;
    p[4]=43;

    int i;
    for(i=0;i<5;i++)
{
    printf("%d",p[i]);
}
    
}