//create a structure with three variables name of a car,maximum speed and price,store this in a array of structures and display them!
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct car
{
    char name[100];
    float speed;
    float price;
};
void main()
{
   int n;
   printf(" enter the number of cars ");
   scanf("%d",&n);
   struct car b[n]; 
   for(int i=0;i<n;i++)
   {
   printf(" enter the name of cars:");
    scanf("%s",b[i].name);

    printf(" enter the speed of cars:");
    scanf("%f",&b[i].speed);

    printf("enter the price of cars:");
    scanf("%f",&b[i].price);
   }
   printf("your information:\n");
   for(int i=0;i<n;i++)
   {
    printf("%s\n",b[i].name);
    printf("%f\n",b[i].speed);
    printf("%f\n",b[i].price);
   }
}
