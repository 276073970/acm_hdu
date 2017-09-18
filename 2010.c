#include <stdio.h>

int main(void)
{
	int m, n, i, iSum, iFlag;
	int iHundreds, iTens, iUnit;

	freopen("test.in", "r", stdin);
	while(scanf("%d %d", &m, &n)!=EOF)
	{
		iFlag=0;
		for(i=m; i<=n; i++)
		{
			iHundreds=i/100;
			iTens=i%100/10;
			iUnit=i%10;
			iSum=iHundreds*iHundreds*iHundreds+iTens*iTens*iTens+iUnit*iUnit*iUnit;
			if(iSum==i)
			{
				iFlag++;
				if(iFlag==1)
					printf("%d", i);
				else
					printf(" %d", i);
			}
		}
		if(iFlag==0)
			printf("no");
		printf("\n");
	}
	fclose(stdin);

	return 0;
}
