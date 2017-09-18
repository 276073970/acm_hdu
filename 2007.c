#include <stdio.h>

int main(void)
{
	int m, n, i, temp;
	int sum_odd, sum_even;

	freopen("test.in", "r", stdin);
	while(scanf("%d%d", &m, &n)!=EOF)
	{
		if(m>n)
		{
			temp=m;
			m=n;
			n=temp;
		}
		sum_odd=0;
		sum_even=0;
		for(i=m; i<=n; i++)
		{
			if(i%2==1)
				sum_odd+=i*i*i;
			else
				sum_even+=i*i;
		}
		printf("%d %d\n", sum_even, sum_odd);
	}
	fclose(stdin);

	return 0;
}
