#include<stdio.h>
struct student
{
	int roll;
	char name[20];
	float marks;
	char grade;
};
int main(){
	struct student s1 = {101,"Seetha",89.5,'A'};
	struct student s2 = {102,"Raj",99.8,'A'};
	printf("\n student roll no = %d\n student name = %s \n student marks = %.2f \n student grade = %c",s1.roll,s1.name,s1.marks,s1.grade);
	printf("\n");
	printf("\n student roll no = %d\n student name = %s \n student marks = %.2f \n student grade = %c",s2.roll,s2.name,s2.marks,s2.grade); 
return 0;
}



