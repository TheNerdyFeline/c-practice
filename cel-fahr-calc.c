#include <stdio.h>

/* print Celsius-Fahrenheit table for fahr = 0, 20, ..., 300 */

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of table */
	upper = 300;	/* uppler limit of table */
	step = 20;	/* step size */

	celsius = lower;
	printf("Celsius\t Fahrenhiet\n");
	while (celsius <= upper) {
		fahr = (celsius * 9.0/5.0) + 32.0;
		printf("\%.0f\t\%5.2f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
