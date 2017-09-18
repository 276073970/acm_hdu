#include <stdio.h>

int main()
{
	int i,n,t,sum;
	freopen("test.in","r",stdin);
	while(scanf("%d",&n)!=EOF)
	{
		sum=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&t);
			sum=sum+t;
		}
		printf("%d\n",sum);
	}
	fclose(stdin);
	return 0;
}
