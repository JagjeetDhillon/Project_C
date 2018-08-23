#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdarg.h>

//Passing the count of the arguments as first argument
int sum(int count, ...){
    int total = 0;
    va_list numbers;
    va_start(numbers, count);


    for(int i=0; i<count; i++){
        total += va_arg(numbers, int);
    }
    va_end(numbers);
    return total;
}
// passing a sentanal or magic value to show compiler that this is the end of arguments

int Sum2(int number1, ...){
    int total=number1;
    va_list numbers;
    va_start(numbers, number1);

    while(number1>0){
        int args = va_arg(numbers, int);
        if(0==args){
            break;
        }
        total += args;
    }
    va_end(numbers);
    return total;

}
void main(){
    printf("Sum of the numbers = %d \n", sum(5,1,2,3,4,5));
    printf("Sum of the numbers = %d \n", Sum2(1,2,3,4,5,0));
}
