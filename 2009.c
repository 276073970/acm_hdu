#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, m, i;
	float fSum, fExponent;

	freopen("test.in", "r", stdin);
	while(scanf("%d %d", &n, &m)!=EOF)
	{
		fSum=0;
		for(i=1; i<=m; i++)
		{
			fExponent=pow(0.5,i-1);
			fSum+=pow(n,fExponent);
		}
		printf("%.2f\n", fSum);
	}
	fclose(stdin);

	return 0;
}
