#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct {
	float coff;
	int pow;
}poly;
void read(poly *p,int s);
void print(poly *p,int s);
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
    rp = (poly*)calloc(s1+s2,sizeof(poly));
    printf("enter 1st term of polynomial\n");
    read(p1,s1);
    printf("enter 2nd term of polynomial\n");
    read(p2,s2);
    printf("plynomial entered are\n");
    print(p1,s1);
    printf("\n");
    print(p2,s2);
	getch();
	return 0;
}
void read(poly *p,int s)
{
	int i;
	for(i=0;i<s;i++)
	{
		printf("enter %d coff..\n",i+1);
		scanf("%f",&p[i].coff);
		printf("enter powerof %d\n",i+1);
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
			break;
		}
		printf("%.1fx^%d",p[i].coff,p[i].pow);
		if(i!=s-1)
		{
			printf("+");
		}
	}
}
