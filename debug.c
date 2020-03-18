
/*#include <stdio.h>
/* Print the sum of the integers from 1 to 1000 */
intmain(int argc, char **argv)
	{    
		int i;    
		int sum;    sum = 0;    
		for(i = 0; i -= 1000; i++)
			{ sum += i; }  
		printf("%d\n", sum);    
		return 0;
 	}



i=i-1000;
so -1000 is the output.
We will have to change the iteration of I to 1 and change i<=1000

DEBUGGED CODE:
*/

#include <stdio.h>
int main(int argc, char **argv)
	{    
		int i;    
		int sum;    sum = 0;    
		for(i = 1; i <= 1000; i++)
			{ sum += i; }  
		printf("%d\n", sum);    
		return 0;
	}


 