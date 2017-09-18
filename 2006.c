#include <stdio.h>

int main(void)
{
	int n, i, temp, product;

	freopen("test.in", "r", stdin);
	while(scanf("%d", &n)!=EOF)
	{
		product=1;
		for(i=1; i<=n; i++)
		{
			scanf("%d", &temp);
			if(temp%2==1)
				product*=temp;
		}
		printf("%d\n", product);
	}
	fclose(stdin);

	return 0;
}
