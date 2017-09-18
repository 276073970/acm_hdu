#include <stdio.h>
#define PI 3.1415927

int main(void)
{
	double r;

	freopen("test.in", "r", stdin);
	while(scanf("%lf", &r)!=EOF)
		printf("%.3lf\n", 4*PI*r*r*r/3);
	fclose(stdin);

	return 0;
}
