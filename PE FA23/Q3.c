#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
    system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i, a, b, sum = 0;
    scanf("%d %d", &a, &b);

    for(i = a; i <= b; i++){
        if(i % 2 == 0)
            sum += i;
    }

  
  // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

    printf("%d", sum);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system ("pause");
    return(0);
}