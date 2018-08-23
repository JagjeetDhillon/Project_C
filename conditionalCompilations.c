#include<stdio.h>
#include<string.h>
#include<stdlib.h>



void main(){
	#if defined(WINDOWS)
	printf("Hello WINDOWS\n");
	#elif defined(MAC)
	printf("Hello MAC\n");
	#elif defined(LINUX)
	printf("Hello LINUX\n");
	#else
	#error This code only Runs on WINDOWS, MAC, LINUX!!!!!!;
	#endif

}