#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
	char name[21];

	printf("Please Enter your name: ");
	scanf("%20s", &name);
	printf("welcome %s\n",name );
}