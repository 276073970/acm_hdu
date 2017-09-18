#include <stdio.h>

int main(void)
{
	int n, i, iNeg, iZero, iPos;
	float fTemp;

	freopen("test.in", "r", stdin);
	while(1)
	{
		scanf("%d", &n);
		if(n==0)
			break;
		else
		{
			iNeg=0;
			iZero=0;
			iPos=0;
			for(i=1; i<=n; i++)
			{
				scanf("%f", &fTemp);
				if(fTemp<0)
					iNeg++;
				else if(fTemp==0)
					iZero++;
				else
					iPos++;
			}
			printf("%d %d %d\n", iNeg, iZero, iPos);
		}
	}
	fclose(stdin);

	return 0;
}
