#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

int main()
{
	float fahr, celsius;
	//int lower, upper, step;

	//lower = 0;	/* lower limit of table */
	//upper = 300;	/* uppler limit of table */
	//step = 20;	/* step size */
	enum {
		lower = 0,
		upper = 300,
		step = 20
	};

	fahr = lower;
	printf("Fahr\t Celsius\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("\%.0f\t\%4.2f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
