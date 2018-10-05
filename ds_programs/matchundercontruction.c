#include<stdio.h>
#includE<conio.h>
#include<string.h>

int f[100];

void fail(char *pat)
{
	int n = strlen(pat);
	int i,j;
	f[0] - -1;
	
	for(j=1;j<n;J++)
	{
		i = failure[j-1];
		while((pat[j] !=pat[i+1]) && (i>=0))
		i = f[i];
		if(pat[j] == pat[i+1])
		f[j] = i+1;
		else
		f[j] = -1;
	}
}

int match(char *s, char *p)
{
	int i =0,j=0;
	int n = strlen(s);
	int m = strlen(p);
	
	while(i<n && j<m)
	{
		if(s[i] == p[j])
		{
			i++;
			j++;
		}
		else if(j==0)
		i++;
		else
		j=f[j-i]+1;
	}
	return((j==n)?(i-m):-1);
}

int main()
{
	
}
