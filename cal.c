#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//how to use command line arguments

int main(int argc, char const *argv[])
{
	if(argc<3){
		printf("for cal.exe [sum|avg]<numbers\n");
		return -1; //failure
	}
	//need to chack if user provide sum or avg as first arguments
	if (strcmp(argv[1], "sum")==0){
		//do sum
		int sum=0;
		for (int i = 2; i < argc; ++i)
			{
				sum +=atoi(argv[i]);
			}	
			printf("sum of the given numbers = %d\n",sum);
	}
	else if(strcmp(argv[1], "avg")==0){
		//do average
		int sum=0;
		int count =0;
		for (int i = 2; i < argc; ++i)
			{
				sum +=atoi(argv[i]);
				count++;
			}
			//float(count)/1.0;
			//printf("count = %d\n",count );
			printf("Average of the given numbers = %f\n",(float)sum/count );	
	}
	else{
		printf("for cal.exe [sum|avg]<numbers\n");
		//there return  can check by %ERRORLEVEL%
		return -2;  //failure
	}
}