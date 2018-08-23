#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#define SUNDAY 0
#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6

#define PRINT_DAY_NAME(x) printf("today is %s\n",#x)
#define PRINT_CONCAT(a, b) printf("%s\n", #a###b)

void main(){
	PRINT_DAY_NAME(MONDAY);
	PRINT_CONCAT(a,b);

}