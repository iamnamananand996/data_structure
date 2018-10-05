#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char string[100],match[100],c;
	int i=0,j=0,index;
	printf("enter string");
	do{
		fflush(stdin);
		c = getchar();
		string[i++] = tolower(c);
	}while(c!='\n');
	
	string[i-1] = '\0';
	printf("enter substring");
	i=0;
	do
	{
		fflush(stdin);
		c = getchar();
		match[i++] = tolower(c);
	}while(c!='\n');
	
	match[i-1] = '\0';
	
	for(i=0;i<strlen(string)-strlen(match)+1;i++)
	{
		index = i;
		if(string[i]==match[j])
		{
			do
			{
			i++;
			j++;
		}while(j!=strlen(match) && string[i]==match[j]);
	
	if(j==strlen(match))
	{
		printf("match found fron %d to %d",index+1,i);
		return 0;
	}
	else
	{
		i = index+1;
		j=0;
	}
}
	
}
printf("no. substing match found");
getch();
return 0;
}
