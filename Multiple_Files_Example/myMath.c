#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//to print out the sum of integer array
int sum(int a[], int length){
	int total = 0;
	for (int i = 0; i < length; ++i)
	{
		 total += a[i];
	}
	return total;
}
//to find the maximum from interger array

int max(int a[], int length){
	int max = 0;
	for (int i = 0; i < length; ++i)
	{
		if (a[i]>max)
		{
			max = a[i];
		}
	}
	return max;
}
// to find the factorial of an integer value
int factorial(int a){
	int fact = 1;
	for (int i = a; i > 1; --i)
	{
		fact *= i;
	}
	return fact;
}