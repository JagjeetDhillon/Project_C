#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//macros allow to pass argument
#define SUM(a,b)   (a)+(b)
#define MAX(x,y)   ((x) > (y))? (x): (y)
#define MUL(a,b)   (a)*(b)
void main(){
	printf("sum = %d\n",SUM(10,20));
	printf("%d\n",MAX(10+20,20));
	printf("Multiplication = %d\n",MUL(10+1,20));
}