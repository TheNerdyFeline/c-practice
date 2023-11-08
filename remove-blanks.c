#include <stdio.h>
/* Remove extra blank spaces */

int main()
{
	int ci, bs;
	
	bs = 0;
	while ((ci = getchar()) != EOF) {
		if (ci == ' ' && bs == 0) {
			putchar(ci);
			++bs;
		}
		else if (ci == ' ' && bs == 1) {
			++bs;
			//printf("1");
		}
		else if (ci == ' ' && bs > 1) {
			++bs;
			//printf("2");
		}
		else if (ci != ' ') {
			putchar(ci);
			bs = 0;
			//printf("3");
		}
	}
}
