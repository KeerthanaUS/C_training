//write a c function which will accept three parameters l,b,h and return volume of the cuboid!
#include<stdio.h>
  float volume (int l,int b,int h)
{
    float vol=l*b*h;
   return vol;
}
void main()
{
    int l=2;
    int b=2;
    int h=3;
    printf("%f",volume(l,b,h));
}