#include <stdio.h>
/* count characters in input; 1st version */

int main()
{
	long nc;

	nc = 0;
	//printf("%ld\n", nc);
	while ((getchar()) != '\n')
		//printf("while test");
		//printf("%ld\n", nc);
		++nc;
		//printf("while test");
	printf("%ld\n", nc);

	//double cc;
	
	//for(cc = 0; getchar() != EOF; ++cc)
		//printf("for test");
	//	printf("%.0f\n", cc);
}
