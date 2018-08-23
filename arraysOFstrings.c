#include<stdio.h>
#include<string.h>
/*
Grade	rgpa	gpa	accesment
90-100  A 		4	"Excelent"
80-89	B		3	"satisfactory"
79-80	c		2	"Mediocre"
60-69	d		1	"insufficent"
<60		F		0	"Fail"	
*/
int gradeTOgpa(int grade){
	int gpa = (grade-50)/10;
	if(gpa>4){
		gpa = 4;
	}else if (gpa<1)
	{
		gpa = 0;
	}
	return gpa;
}

void main(){
	int grade;
	printf("Enter grade of student: ");
	scanf("%d",&grade);
	char*rgpa[] = {"A","B","C","D","F"};
	char *accesment[] = {"Excelent","Satisfactory","Mediocre","Insufficent","Fail"};

	int gpa = gradeTOgpa(grade);
	//printf("%d\n",gpa );
	//we are using gpa value to index the char*rgpa and Char*accessment
	//to reverse the index use 4-

	printf("rating of the grade %d = %s\n",grade, rgpa[4-gpa]);
	printf("accesment of the grade %d = %s\n",grade, accesment[4-gpa]);
}