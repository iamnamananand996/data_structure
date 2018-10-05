#include<stdio.h>
#include<conio.h>
typedef struct 
{
	int month;
	int day;
	int year;
}date;
typedef struct 
{
	char name[10];
	int age;
	float salary;
	date dob;
}humanBeing;
int main()
{
	humanBeing person;
	person.dob.day = 11;
	person.dob.month = 2;
	person.dob.year = 1944;
	printf("%d %d %d",person.dob.day,person.dob.month,person.dob.year);
	getch();
	return 0;
}
