#include<stdio.h>
#include<string.h>

void main(){
	int a = 100;
	int b = 200;
	char str[200];

	printf("the sum of the integer %d and %d is %d \n",a,b,a+b);
	sprintf(str, "the sum of the integer %d and %d is %d\n",a ,b , a+b);
	printf("%s\n",str );




}