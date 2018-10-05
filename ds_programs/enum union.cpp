#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0
typedef struct 
{
	enum tagField { single=1, married,widowed,divorced
	}sex;
	 union {
		int day;
		int month;
		int year;
		int no;
	}data;
	}type;

typedef struct {
	char name[20];
	int age;
	float salary;
	type Info;
}humanBeing;

int main()
{
	humanBeing person1, person2;
	
	person1.Info.single;        ///// ????????????
	person1.Info.data.day = 20;
	person1.Info.data.month = 12;
	person1.Info.data.year = 13;  // ???????????
	// person2.sexInfo.sex.female;
    
	printf("%d/%d/%d ",person1.Info.data.day,person1.Info.data.month,person1.Info.data.year);
	printf("%d %d",person1.sexInfo.sex.female,person2.sexInfo.sex.male);
	getch();
	return 0;
}
