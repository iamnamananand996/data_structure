#include<stdio.h>
#include<conio.h>
#include<string.h>
#define FALSE 0 
#define TRUE 1
typedef struct 
{
	char name[10];
	int age;
	float salary;
}humanBeing;
int main()
{
	humanBeing person1,person2;
	strcpy(person1.name,"naman");  // use cpy but how we asign diretly???
	strcpy(person2.name,"anand");
	person1.age = 28;
	person2.age = 30;
	person1.salary = 200.34;
	person2.salary = 34.23;
	if(humanEqual(person1,person2))    //???????
	{
		printf("two people dont have same name");
	}
	else
	{
		printf("2 people have same name");
}
getch();
	return 0;
}
	
int humanEqual(humanBeing person1, humanBeing person2)

{
	if (strcmp(person1.name,person2.name))
	return FALSE;
	if(person1.age != person2.age)
	return TRUE;
	if(person1.salary != person2.salary)
	return TRUE;
}
