#include<stdio.h>
#include<conio.h>

int getMax(int arr[], int n)
{ 
     int i;
    int mx = arr[0];
    for ( i = 1; i < n; i++)
        if (arr[i] < mx)
            mx = arr[i];
    return mx;
}


int main()
{
	int x;
	int arr[] ={ 12,45,35,678,32,1,23};
	x = getMax(arr,7);
	printf("%d",x);
	
	getch();
	return 0;
}
