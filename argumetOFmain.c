#include<stdio.h>
#include<string.h>

void main(int argc, char const *argv[])
{
	printf(" argument count  %d\n",argc );

	for (int i = 0; i < argc; ++i)
	{
		printf("%s\n",argv[i]);
	}
}