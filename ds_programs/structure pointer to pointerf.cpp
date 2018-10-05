#include<stdio.h>
#include<conio.h>
typedef struct {
	char data ;
	struct list *link;  // pointer concept
} lists;                          
int main()
{
	lists item1,item2,item3;
	item1.data ='a';
	item2.data ='b';
	item3.data ='c';
	// item1.link = item2.link = item3.link = NULL;
	item1.link = &item2;
	item2.link = &item3;
	printf("%c %c %c %c %c %c",item1.data,item2.data,item3.data,item1.link,item2.link,item3.link);
	getch();
	return 0;
}
