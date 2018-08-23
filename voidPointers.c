#include<stdio.h>
enum valueType {
	CHAR,
	INT,
	FLOAT,
	STRING
};

void printValuetype(void *p, enum valueType type){
	switch(type){
		case CHAR:
			// we are converting void pointer to char pointer by *(char*)p like we do for float (float)3.0
			printf("%c\n",*(char*)p);
			break;
		case INT:
			printf("%d\n",*(int*)p);
			break;
		case FLOAT:
			printf("%f\n",*(float*)p);
			break;
		case STRING:
			printf("%s\n",*(char*)p);
			break;
		default:
			printf("value type not find Please try again !!!!!!!\n");		
	}
}

void main(){

	int a = 100;
	float b = 3.14;
	char c = 'H';

	void*pa = &a;
	void*pb = &b;
	void*pc = &c;

	printValuetype(&a, INT);
	printValuetype(&b, FLOAT);
	printValuetype(&c, CHAR);
	printValuetype("hello this is a string value '\0'", STRING);
	printValuetype(pa, INT);
	printValuetype(pb, FLOAT);
	printValuetype(pc, CHAR);


}