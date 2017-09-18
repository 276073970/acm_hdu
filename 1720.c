#include <stdio.h>

int main(void)
{
	int x, y;

	freopen("test.in", "r", stdin);
	while(scanf("%x %x", &x, &y) != EOF)
		printf("%d\n", x + y);
	fclose(stdin);

	return 0;
}
