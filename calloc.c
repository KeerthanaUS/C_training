#include<stdio.h>
#include<stdlib.h>
void main()
{
    float *p=(float *)calloc(4,sizeof(float));
  p[0]=12.24;
  p[1]=1.2;
  p[2]=83.65;
  p[3]=1.98;
  printf("%f%f%f%f\n",p[0],p[1],p[2],p[3]);
  free(p);
}