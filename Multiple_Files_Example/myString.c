#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//remove spacefunction
void RemoveSpaces(char*p){
	if(NULL==p){
		return;
	}
	int a = 0;
	for (unsigned int i = 0; i < strlen(p); ++i)
	{
		if(p[i]!=' '){
			p[a++] = p[i];
		}

	}
	p[a]='0';
}	
//count the words in string
int WordCount(const char*Pstring, const char*Pword){
	int count = 0;
	if(NULL == Pstring || NULL == Pword){
		return 0;
	}
	char *ps = strstr(Pstring,Pword);
	if(ps != NULL){
		count++;
		while(*ps){
			ps = strstr(ps + 1, Pword);
			if(ps == NULL){
				break;
			}
			++count;

		}
	}
	return count;

}
//Reverse string function
char * ReverseString(char*Pstring){
	if(NULL == Pstring){
		return NULL;
	}
	int len = strlen(Pstring);
	char * Pstart = Pstring;
	char * Pend = Pstring + len-1;

	if(Pend > Pstart){
		char temp = *Pstart;
		*Pstart = *Pend;
		*Pend = temp;
		Pstart++;
		Pend--;		
	}
	return Pstring;
}