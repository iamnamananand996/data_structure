#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],n,I,i,p,q,Z;
 	printf("enter size");
 	scanf("%d",&n);
 	printf("enter the elements of array");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 printf(" the elements of array");
 	for(i=0;i<n;i++)
 	{
 		printf("%d",a[i]);
	 }
	 printf("enter the value of I");
	 scanf("%d",&I);
	 printf("enter the value of Z");
	 scanf("%d",&Z);
	 printf("enter the position");
	 scanf("%d",&p);
	 printf("enter the postion 2");
	 scanf("%d",&q);
	 i=n-2;
	 while(p<=i)
	 {
	 	a[i+2] = a[i];
	 	i--;
	 }
	 a[p]=I;
	 a[q]=Z;
	 n++;
	 printf("after insertion");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d\n",a[i]);
	 }
	 getch();
	 return 0;
}
