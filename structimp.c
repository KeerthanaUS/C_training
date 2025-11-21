#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    strcpy(s1.name, "joy");
    s1.age = 19;
    s1.marks = 78.87;

    struct student s2;
    strcpy(s2.name,"jony");
    s2.age = 18;
    s2.marks = 90.9;

    struct student s3;
    strcpy(s3.name,"popoye");
    s3.age = 28;
    s3.marks = 99.0;

    printf("%s ", s3.name);
    printf("%d", s2.age);
}
