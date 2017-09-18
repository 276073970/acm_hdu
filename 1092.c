#include <stdio.h>

int main()
{
	int i,n,t,sum;
	while(1)
	{
		sum=0;
		scanf("%d",&n);
		if(n==0)
			break;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&t);
			sum=sum+t;
		}
		printf("%d\n",sum);
	}
	return 0;
}
