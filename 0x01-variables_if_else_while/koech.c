#include <stdio.h> 
#include <stdlib.h>  
#include <time.h> 
void main()  
{     
    srand(time(NULL));
    int randomNum = rand();
    int lastDigit = randomNum % 10;
    
    if ( lastDigit == 0) {
        printf ("Last digit of %d is %d and is 0", randomNum, lastDigit); 
    } else if (lastDigit > 0 && lastDigit < 6) {
        printf ("Last digit of %d is %d and is less than 6 and not 0", randomNum, lastDigit);       
    } else {
        printf ("Last digit of %d is %d and is greater than 5", randomNum, lastDigit);     
    }
 
    return 0;  
}  
