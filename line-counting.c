#include <stdio.h>
/* count lines input */

int main()
{
	int c, nl, nt, nb;
	
	nl = 0;
	nt = 0;
	nb = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
		else if (c == '\t')
			++nt;
		else if (c == ' ')
			++nb;
	printf("\n%d New Lines \n", nl);
	printf("%d Tabs \n", nt);
	printf("%d Blanks \n", nb);
}
