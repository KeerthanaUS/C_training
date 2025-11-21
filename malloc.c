#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p=(int*)malloc(4*sizeof(int));
    p[0]=25;
    p[1]=76;
    p[2]=12;
    p[3]=78;

    printf("%d\n",p[0]);
   printf("%d\n",p[1]);
   printf("%d\n",p[2]);  
   printf("%d\n",p[3]);
   free(p);
}