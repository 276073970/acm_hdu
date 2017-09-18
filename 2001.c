#include <stdio.h>
#include <math.h>

int main(void)
{
	float x1, y1, x2, y2, d;

	freopen("test.in", "r", stdin);
	while(scanf("%f%f%f%f", &x1, &y1, &x2, &y2)!=EOF)
	{
		printf("%.2f\n", sqrt(pow((x2-x1),2)+pow((y2-y1),2)));
	}
	fclose(stdin);

	return 0;
}
