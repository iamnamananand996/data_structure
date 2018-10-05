#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

char str[100],pat[100],rep[100];
int flag;
void read()
{
	printf("enter the STRING : ");
	gets(str);
	
	printf("enter the PATTERN ");
	gets(pat);
	
	printf("enter the REPLACE STRING :");
	gets(rep);
}

int match(char t[],char p[])
{
	int i,j;
	int n = strlength(str);
	int m = strlength(pat);
	
	for(i = 0;i<=(n-m); ++i)
	{
		j= 0;
		while(j<m  && p[j] == t[i+j])
		{
			j++;
		}
	if(j==m)
	  return i;
    }
    return -1;
}

int strlength(char *s)
{
	int i;
	for(i=0;s[i] != '\0';++i);
	
	return i;
	    
}

void stringcpy(char *dest,char *src)
{
	int i;
	for(i=0;src[i] != '\0';i++)
	{
		dest[i]  = src[i];
	}
	dest[i] = '\0';
}

void stringNcpy(char *dest,char *src,int n)
{
	int i;
	for(i=0;i<n;i++)
	    dest[i] = src[i];
	
	dest[i] = '\0';
}

void stringcat(char *dest,char *src)
{
	int j;
	int i = strlength(dest);
	for(j=0;src[j] != '\0';i++,j++)
	  dest[i] = src[j];
	  
	  dest[i] = '\0';
}

int find()
{
	
	char buffer[200];
	int i=0;
	
	while(1)
	{
		i = match(str,pat);
		if(i == -1)
		 break;
		stringNcpy(buffer,str,i);
		stringcat(buffer,rep);
		stringcat(buffer,str+i+strlength(pat));
		stringcpy(str,buffer);
	
		return 1;
		
		
	}
	//return(flag);
}

int main()
{
	read();
	printf("before replacement :%s ",str);
	flag = find();
	if(flag == 1)
	printf("after replacing string it will be :%s ",str);
	else
	printf("patern does not match");
	
	
	    
	
	return 0;
}
