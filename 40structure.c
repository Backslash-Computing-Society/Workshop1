#include <stdio.h>
#include<string.h>
//user-defined data type
typedef struct student{
    char name[100];
    int roll;
    float cgpa;
}stu;
void print(struct student a1);
int main()
{
    struct student s1;
    //s1.name="noor";//this is not possible bcz we have declared string using array so it can't be re-initialized
    strcpy(s1.name,"noor");
    s1.roll=123;
    s1.cgpa=9.9;
    printf("s1 name=%s\n",s1.name);
    printf("s1 roll=%d\n",s1.roll);
    printf("s1 cgpa=%f\n",s1.cgpa);
    
    //pointer to structure
    struct student *ptr=&s1;
    printf("%s\n",(*ptr).name);
    printf("%d\n",ptr->roll);

    //another way of initialization
    stu s2={"mussu",21,10};
    printf("s2 name=%s\n",s2.name);
    printf("s2 roll=%d\n",s2.roll);
    printf("s2 cgpa=%f\n",s2.cgpa);

    //array of structures
    struct student cobc[100];
    strcpy(cobc[0].name,"noor");
    cobc[0].roll=123;
    cobc[0].cgpa=12.3;
    printf("first student name=%s\n",cobc[0].name);
    printf("first student roll=%d\n",cobc[0].roll);
    printf("first student cgpa=%f\n",cobc[0].cgpa);

    //passing sructure to function
    print(s1);
    //passing structure to function is call by value
    printf("%d",s1.roll);
    return 0;
}
void print(struct student a1){
    printf("s1 name=%s\n",a1.name);
    printf("s1 roll=%d\n",a1.roll);
    printf("s1 cgpa=%f\n",a1.cgpa);
    a1.roll=2;
}