#include<stdio.h>
#include<string.h>

void main(){

char a[]="This is a string in C/C++";
printf("%s \n",a );
//strlen is used to find the length of string in c/c++ it not count null terminator
printf("%d \n",strlen(a));
//sizeof used to find the lenght of string but it count null terminator 
printf("%d\n",sizeof(a)/sizeof(a[0]));

}