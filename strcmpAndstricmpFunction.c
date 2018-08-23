#include<stdio.h>
#include<string.h>

void main(){
	char*p1 = "ABCD";
	char*p2 = "ABCDE";

	char str1[] = "ABCD";
	char str2[] = "ABCD";

	//after compare 
	//<o if p1<p2
	//0 if p1 == p2
	//>0 if p1>p2
	int result = strcmp(p1,p2);
	int result1 =strcmp(str1,str2);
	printf("result = %d\n",result );
    printf("result1 = %d\n",result1 );

}