#include <stdio.h>
#include <stdbool.h>

bool Triangle(float, float, float);

int main(void)
{
	int m, i;
	float a, b, c;

	freopen("test.in", "r", stdin);
	while(scanf("%d", &m)!=EOF)
	{
		for(i=1; i<=m; i++)
		{
			scanf("%f %f %f", &a, &b, &c);
			if(Triangle(a, b, c)==1)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	fclose(stdin);

	return 0;
}

bool Triangle(float a, float b, float c)
{
	if(a+b-c>0 && a+c-b>0 && b+c-a>0)
		return 1;
	else
		return 0;
}
