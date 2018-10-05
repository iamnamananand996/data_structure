#include <stdio.h>
#include <stdlib.h>
#include <math.h>  
 
 
int displayMenu();
int getData(int * a, int n);
void input();
void display();
float mean1(float[],int);  
float median1(float[],int);  
float mode1(float[],int);  
double standarddeviation1(float array[],int n);
 
 
int main()
{
  int com;
  srand(time(NULL));
  do{
     com=displayMenu();
     switch (com)
     {
       case 1 : input(); break;
       case 2 : display(); break;
       case 3 : printf("have a nice day\n");break;
       default : printf("Bad data Try again\n");
      }
       
      }while(com !=3);
 
 
return 0;
 
 
}
 
 
 
 
int displayMenu()
{
   int c;
   printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
   printf("@  1. Enter data          @\n");
   printf("@  2. Display data        @\n");
   printf("@  3. Quit                @\n");
   printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
   printf("Enter your choice:");
   scanf("%d",&c);
   return c ;
 }
  
 void input()
 {
    int i,n,choice;  
    float array[200],mean,median,mode;  
    double standarddeviation;
     
    switch(choice)  
    {  
        case 1: mean=mean1(array,n);  
            printf("\n\tMean = %f\n",mean);  
            break;  
        case 2: median=median1(array,n);  
            printf("\n\tMedian = \n",median);  
            break;  
        case 3: mode=mode1(array,n);  
            printf("\n\tMode = %f\n",mode);  
            break;   
        case 4: standarddeviation=standarddeviation1(array,n);  
            printf("\n\tStandard deviation = %f\n",standarddeviation); 
            break;  
        case 5: break;  
        default:printf("Wrong Option");  
            break;  
    }  
 
 
    while(choice!=5);  
    getchar(); 
return 0;
}
   
int getData(int * a, int n)
{
  int i;
  i=n;
  printf("Enter item#%d>>",i+1);
  while(scanf("%d",&a[i])!=EOF)
  {
    i++;
    printf("Enter item#%d>>",i+1);
  } 
 
 
  return i;
}      
 
 
void display()
{
 printf("is not done\n");
} 
float mean1(float array[],int n) 
{  
    int i;  
    float sum=0;  
    for(i=0;i<n;i++)  
    sum=sum+array[i];  
return (sum/n);  
}  
 
 
 
 
float median1(float array[],int n) 
{  
    float temp;  
    int i,j;  
    for(i=n-1;i>=0;i--)  
        for(j=0;j<i;j++)  
            if(array[j]>=array[j+1])  
            {  
                temp=array[j];  
                array[j]=array[j+1];  
                array[j+1]=temp;  
            }  
 
 
    if(n%2==0)  
        return (array[n/2]+array[n/2-1])/2;  
    else
        return array[n/2];  
}  
 
 
float mode1(float array[],int n) 
{  
    return (3*median1(array,n)-2*mean1(array,n));  
}  
 
 
double standarddeviation1(float array[],int n) 
{  
    int j;   
    double max[100],sum,variance,mean;  
    mean=mean1(array,n);  
    sum=0;  
    for(j=0;j<n;j++)   
    {  
        max[j]=pow((array[j]-mean),2);  
        sum+=max[j];  
    }  
    variance=sum/(j-1);   
    return sqrt(variance);  
}
