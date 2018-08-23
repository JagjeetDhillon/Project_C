#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
void foo();
// forward declaration
int count = 10;
 
int main(){
    printf("count is = %d\n", count);
    foo();
    printf("count is = %d\n", count);
}