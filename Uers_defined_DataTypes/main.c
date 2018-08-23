#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//how to declare user defined data type using struct

struct point{
    int x;
    int y;

};
//we are using point to create rectangle;
struct Rectangle{
    struct point pt1;
    struct point pt2;
};

struct Employee{
    char name[100];
    int age;
    int empid;
    float salary;
};

void printValue(struct point pt){
    printf("X=%d and Y=%d \n", pt.x, pt.y);

}

void main(){
    // this is how you intialize the variable   
    struct point pt1;
    struct point pt2;
    // one way of declaring is here
     pt1.x = 100;
    pt1.y = 200;
    pt2.x = 10;
    pt2.y = 20;
    //another way of declaring is below
    struct point pt3 = {150, 300}; //here pt3.x = 150; pt3.y = 300;
    printValue(pt1);
    printValue(pt2);
    printValue(pt3);
    // creating structure from another structure
    struct Rectangle rc1;
    rc1.pt1 = pt1;
    rc1.pt2 = pt2;
    
    //intializing and defining of Employees list

    struct Employee employees[100];
    strcpy([0].name,"John");
    [0].age = 25;
    [0].empid = 0;
    [0].salary = 5000.0;


}











