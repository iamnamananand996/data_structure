#include<stdio.h>
#include<conio.h>

typedef struct {
	int len;
	int breath;
	int radius;
	int hight;
}geo;

typedef struct {
    geo rectangle;
	geo trangle;
	geo circle;
	
}str;
int main()
{
	str box,piramid,cylinder;
	box.circle.radius = 5;
	piramid.trangle.hight = 10;
	cylinder.rectangle.len =  22;
	printf("%d %d %d", box.circle.radius,piramid.trangle.hight,cylinder.rectangle.len);
	getch();
	return 0;
}
