#include<stdio.h>
#include<conio.h>
void TOH(int n,char BEG,char AUX,char END);
int main()
{
	char BEG ={'A'};
	char AUX ={'B'};
	char END {'C'};
	int n = 5;
	TOH(n,'A','B','C');
	getch();
	return 0;
}

void TOH(int n,char BEG,char AUX,char END)
{
	if(n>=1)
	{
		TOH(n-1,BEG,AUX,END);
		printf("%c to %c \n",BEG,END);
		TOH(n-1,AUX,BEG,END);
	}
}
