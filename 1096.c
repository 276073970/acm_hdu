#include <stdio.h>

int main()
{
	int i,j,n,m,t,sum;
	freopen("test.in","r",stdin);
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i<=n;i++)
		{
			sum=0;
			scanf("%d",&m);
			for(j=1;j<=m;j++)
			{
				scanf("%d",&t);
				sum=sum+t;
			}
			printf("%d\n",sum);
			if(i!=n)
				printf("\n");
		}
	}
	fclose(stdin);
	return 0;
}
