#include <stdio.h>

int main(void)
{
	int score;

	freopen("test.in", "r", stdin);
	while(scanf("%d", &score)!=EOF)
	{
		if(score<0 || score>100)
			printf("Score is error!\n");
		else
		{
			if(score<60)
				printf("E\n");
			else if(score<70)
				printf("D\n");
			else if(score<80)
				printf("C\n");
			else if(score<90)
				printf("B\n");
			else
				printf("A\n");
		}
	}
	fclose(stdin);

	return 0;
}
