 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 	int a[10],n,I,i;
 	printf("enter size");
 	scanf("%d",&n);
 	printf("enter the elements of array");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 printf("enter the value of I");
	 scanf("%d",&I);
	 for(i=0;i<n;i++)
	 {
	 	a[i] = a[i]*I;
	 	printf("%d",a[i]);
	 }
	 getch();
	 return 0;
 }
