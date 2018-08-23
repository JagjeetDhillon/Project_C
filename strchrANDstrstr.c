#include<stdio.h>
#include<string.h>

int countCharInsideString(char a[], char i){
	//apply strchr function it gives you back a char pointer 
	//looking for all i
	char *pi = strchr(a, i);
	
	if (NULL != pi)
	{	
		int count = 0;
		printf("first location of charactor is %d\n",pi-a);
		pi++;
		while(*pi){
			pi= strchr(pi, i);
			if (pi==NULL){
				break;
			}
			++count;
			printf("found another i at %d\n",pi-a );
			pi++;
		}
		printf("we found total number of charactor inside string = %d\n",count);
	}
}

void main(){
	char str1[]="This is a example to find charactor z inside string";

	printf(" using strchr to find i in string %s\n",str1 );
	printf("length of the string is %d\n", strlen(str1));
	countCharInsideString(str1, 'i');


}