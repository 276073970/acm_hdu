#include <stdio.h>
#include <math.h>

float Sum(int n);

int main(void)
{
	int m, n, i;

	freopen("test.in", "r", stdin);
	while(scanf("%d", &m)!=EOF)
	{
		for(i=1; i<=m; i++)
		{
			scanf("%d", &n);
			printf("%.2f\n", Sum(n));
		}
	}
	fclose(stdin);

	return 0;
}

float Sum(int n)	//多项式求和
{
	int i;
	float fSum=0;

	for(i=1; i<=n; i++)
		fSum+=pow(-1,i-1)/i;

	return fSum;
}
