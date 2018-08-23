#include<stdio.h>

void main()
{
int a[]={1,2,3,4,5,6};
int const b = 2;
int const*pb = &b;
printf("%p\n", pb );	
}