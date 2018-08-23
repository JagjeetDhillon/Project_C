#include<stdio.h>
#include<string.h>

int countWord(char str[], char word[]){
	char *p = strstr(str, word);
	if (p!=NULL){
		int count = 0;
		while(*p){
			p = strstr(p,word);
			if(p==NULL){
				break;
			}
			count++;
			printf("another location of word is %d\n",p-str);
			p++;
		}
		printf("total number of the word = %d\n",count);
	}
}

void main(){
	//we are using strstr it use to find string inside string
	char str1[] = "we need to find word many many many many here ";
	char str2[]="many";
	countWord(str1, "many");
}
