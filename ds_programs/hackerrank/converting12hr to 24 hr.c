#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* timeConversion(char* s) {
    // Complete this function
    int h1,h2,hh,i;
    h1 = (int)s[1] - '0';
    h2 = (int)s[0] - '0';
    hh = (h2 * 10 + h1 % 10);
    
     // If time is in "AM"
    if (s[8] == 'A')
    {
        if (hh == 12)
        {
            printf( "00");
            for ( i=2; i <= 7; i++)
                printf("%d",s[i]);
        }
        else
        {
            for (i=0; i <= 7; i++)
                printf("%d",s[i]);
        }
    }
 
    // If time is in "PM"
    else
    {
        if (hh == 12)
        {
            printf("12");
            for ( i=2; i <= 7; i++)
                printf("%d",s[i]);
        }
        else
        {
            hh = hh + 12;
            printf("%d",hh);
            for (i=2; i <= 7; i++)
                printf("%d",s[i]);
        }
    }
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
        int result_size;
char* result = timeConversion(s);
    printf("%s\n", result);
    return 0;
}

