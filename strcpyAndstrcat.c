#include<stdio.h>
#include<string.h>

void main(){
	char a[200];
	strcpy(a,"this is a string to copy in a");
	strcat(a,"00. this is strcat function");
	strcpy(a,"there is nothing old");
	printf("%s\n",a );

}