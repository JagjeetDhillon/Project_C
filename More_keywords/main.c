#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
void PrintNumber(){
    int i = 0; //here i is a local variable which intialize to 0 with each call
    static int j = 0; //here j is act like a global variable which intialize only at first function call
    i++;
    j++;
    printf(" i is %d \n",i);
    printf(" j is %d \n",j);
}
int main(){
    PrintNumber();
    PrintNumber();
    PrintNumber();
    PrintNumber();

}