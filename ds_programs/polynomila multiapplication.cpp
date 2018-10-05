#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct {
	float coff;
	int pow;
}poly;
void read(poly *p,int s);
void print(poly *p,int s);
void add(poly *p1,int s1,poly *p2,int s2,poly *rp);
void mul(poly *p1,int s1,poly *p2,int s2,poly *rp);
int main()
{
	int s1,s2;
	poly *p1,*p2,*rp;
	printf("enter the 1st size of poly\n");
	scanf("%d",&s1);
	printf("enter size of 2nd poly\n");
	scanf("%d",&s2);
	
	p1 = (poly*)calloc(s1,sizeof(poly));
    p2 = (poly*)calloc(s2,sizeof(poly));
    rp = (poly*)calloc(s1*s2,sizeof(poly));
    printf("enter 1st term of polynomial\n");
    read(p1,s1);
    printf("enter 2nd term of polynomial\n");
    read(p2,s2);
    printf("plynomial entered are\n");
    print(p1,s1);
    printf("\n");
    print(p2,s2);
    printf("after multipication");
    mul(p1,s1,p2,s2,rp);
	print(rp,s1*s2);    
	getch();
	return 0;
}
void read(poly *p,int s)
{
	int i;
	for(i=0;i<s;i++)
	{
		printf("enter %d coff..  :",i+1);
		scanf("%f",&p[i].coff);
		printf("enter powerof %d  : ",i+1);
		scanf("%d",&p[i].pow);
	}
}

void print(poly *p,int s)
{
	int i;
	for(i=0;i<s;i++)
	{
		if(p[i].coff==0)
		{
			continue;
		}
		if(i!=0)
		{
			printf("+");
		}
		printf("%.1fx^%d",p[i].coff,p[i].pow);
	}
}

void add(poly *p1,int s1,poly *p2,int s2,poly *rp)
{
	int i=0,j=0,k=0;
	while(i<s1 && j<s2)
	{
		if(p1[i].pow > p2[j].pow)
		{
			rp[k] = p1[i];
			k++;
			i++;
		}
		else if (p2[j].pow > p1[i].pow)
		{
			rp[k] = p2[j];
			k++;
			j++;
		}
		else
		{
			rp[k].coff = p1[i].coff + p2[j].coff;
			rp[k].pow = p1[i].pow;
			i++;
			j++;
			k++;
		}
	}
	if(i==s1)
	{
		while(j<s2)
		{
			rp[k] = p1[j];
			k++;
			j++;
		}
	}
	else
	{
		while(i<s1)
		{
			rp[k] = p1[i];
			k++;
			i++;
		}
	}
}

void mul(poly *p1,int s1,poly *p2,int s2,poly *rp)
{
	int i,j,k;
	poly *temp = (poly*)calloc(s2,sizeof(poly));
	poly *tempadd = (poly*)calloc((s1*s2),sizeof(poly));
	for(i=0;i<s1;i++)
	{
		for(j=0;j<s2;j++)
		{
			temp[j].coff = p1[i].coff * p2[j].coff;
			temp[j].pow = p1[i].pow + p2[j].pow;		}
	}
    add(rp,s1*s2,temp,s2,tempadd);
	
		for(k=0;k<s1*s2;k++)
		{
			rp[k] = tempadd[k];
		}
}
