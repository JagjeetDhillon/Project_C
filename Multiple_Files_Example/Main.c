#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"MyMath.h"
#include"MyString.h"

int sum(int a[], int length);
void main(){

	int a[] ={1,2,3,4};
	int length = sizeof(a)/sizeof(a[0]);
	int b = 4;

	printf("%d\n",sum(a,length));
	printf("%d\n",max(a,length));
	printf("%d\n",factorial(b));

	char c[] = "HELLO";
	printf("%s\n",ReverseString(c));

}






