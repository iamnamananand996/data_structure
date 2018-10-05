#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int grades_size, int* grades, int *result_size){
	
    // Complete this function
    int i =40,j;
    for(j = 0;j< grades_size;j++ )
    {
	
    while(i <= 100)
    {
    	if((i-grades[j]) == 3)
    		return;
    		//return 0;
    		
		
	else if((i-grades[j]) > 3)
			printf("%d\n",i+5);
			//return (i+5);
			
			//return;
		
		else((i-grades[j]) < 3)
		    printf("%d\n",i+5);
	
			//return(i+5);
			
			//return;
		
	
	
		
		i = i+5;
	}
  }
}

int main() {
    int n; 
      int result_size;
      int result_i;
      int grades_i;
    scanf("%d", &n);
    int *grades = malloc(sizeof(int) * n);
    for(grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
    }
 
    int* result = solve(n, grades, &result_size);
    for(result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    

    return 0;
}
