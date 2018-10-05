#include<stdio.h>
#include<conio.h>

typedef struct {
	int mur = 0;
	int ven = 4;
	int erth =1;
	int mar =3;
	int jup = 15;
	int ura =30;
	int sat = 12;
	int nap = 2;
}moon;
typedef struct {
	int mur = 120000;
	int ven = 123399877;
	int erth = 129000;
	int mar = 12333;
	int jup = 1000;
	int ura = 30000000;
	int sat = 433333;
	int nap = 2333339999;
}miles;

typedef struct {
	enum{ mur = 1,ven,erth,mar,jup,ura,sat,nap
	}planets;
	miles distance;
	moon naturalsat;
}solarSystem;

int main()
{
	solarSystem p1,p2,p3,p4,p5,p6,p7,p8;
	printf("%d %d %d ",p1.distance.erth,p1.naturalsat.erth,p1.erth);
}
