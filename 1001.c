#include <stdio.h>

int main()
{
	int i,n,sum;
    freopen("test.in", "r", stdin);
	while(scanf("%d",&n)!=EOF)
	{
		sum=0;
		for(i=1;i<=n;i++)
		{
			sum=sum+i;
		} 
		printf("%d\n",sum);
		printf("\n");
	}
    fclose(stdin);
	return 0;
}
