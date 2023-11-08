#include <stdio.h>
/* Pring Fahrenheit-Celsius table using for loop */

#define LOWER 0 	/* lowe limit of table */
#define UPPER 300 	/* upper limit */
#define STEP 20 	/* step size */

int main()
{

	int fahr;

	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
