#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>

int count = 10;
void foo();
int main(){
    printf("count is %d \n",count);
    foo();
    printf("count is %d \n",count);
}