#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{

// declare a pointer variable to point to allocated heap space
int    *p_array,i;
double *d_array;

// call malloc to allocate that appropriate number of bytes for the array

p_array = (int *)malloc(sizeof(int)*50);      // allocate 50 ints
d_array = (double *)malloc(sizeof(double)*100);  // allocate 100 doubles


// use [] notation to access array buckets 
// (THIS IS THE PREFERED WAY TO DO IT)
for(i=0; i < 50; i++) {
  p_array[i] = 0;
  printf("%d ",p_array[i]);
}

// you can use pointer arithmetic (but in general don't)
double *dptr = d_array;    // the value of d_array is equivalent to &(d_array[0])
for(i=0; i < 50; i++) {
  *dptr = 0;
  dptr++;
  printf("%ld \t",d_array[i]);
}
getch();
return 0;
}

