#include <stdio.h>

int main(void)
{
	double a;

	freopen("test.in", "r", stdin);
	while(scanf("%lf", &a)!=EOF)
	{
		if(a<0)
			printf("%.2lf\n", 0-a);
		else
			printf("%.2lf\n", a);
	}
	fclose(stdin);

	return 0;
}
