#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"MyHeader.h"

void max(int a, int b){
	if(a>b){
		printinteger(a);
	}else{
		printinteger(b);
	}
}

void main(){
	int a = 100;
	int b = 200;
	max(a,b);
}