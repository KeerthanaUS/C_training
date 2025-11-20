#include<stdio.h>
void main()
{
    int q[3]={3,4,10};
    int c[3]={4,6,1};
     int t;
     int sale;
    
        for(int i=0;i<3;i++)
        {
        t= q[i]*c[i];
    sale= sale +t;
    }
        printf("total sale is %d\n",sale);
    
    
}