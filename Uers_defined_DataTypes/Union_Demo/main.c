#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//structure
//structure size will be total of all members size in this case it is 4+4+10= 18
struct Mystruct{
    int a; //4byte
    float b; //4 byte
    char str[10]; //10 bytes
};
//how to use Union keyword in c
//unions share same memory location
//size of union will be the largest of its members size in below example it is 10 bytes
union Myunion{
    int a;
    float b;
    char str[10]; //10 bytes

};
void main(){
    struct Mystruct s1;
    union Myunion u1;

    s1.a=100;
    s1.b=200.0;
    strcpy(s1.str, "Hello");


    u1.a=100;
    u1.b=200.0;
    strcpy(u1.str, "Hello");


    printf("%ld\n",sizeof(s1));
    printf("%ld\n",sizeof(u1));
}
