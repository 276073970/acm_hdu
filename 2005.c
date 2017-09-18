#include <stdio.h>
#include <stdbool.h>

bool leap(int year);
int days(bool leap, int month);

int main(void)
{
	int year, month, day, count, i;
	bool l;

	freopen("test.in", "r", stdin);
	while(scanf("%d", &year)!=EOF)
	{
		getchar();
		scanf("%d", &month);
		getchar();
		scanf("%d", &day);
		l=leap(year);
		count=0;
		for(i=1; i<month; i++)
		{
			count=count+days(l, i);
		}
		count=count+day;
		printf("%d\n", count);
	}
	fclose(stdin);

	return 0;
}

bool leap(int year)	//判断闰年，闰年返回1，非闰年返回0
{
	if(year%100==0)
	{
		if(year%400==0)
			return 1;
		else
			return 0;
	}
	else
	{
		if(year%4==0)
			return 1;
		else
			return 0;
	}
}

int days(bool leap, int month)	//判断当月天数
{
	switch(month)
	{
		case 1: return 31;break;
		case 2:	//2月特殊：常年返回28天，闰年返回29天
				{
					if(leap==1)
						return 29;
					else
						return 28;
					break;
				}
		case 3: return 31;break;
		case 4: return 30;break;
		case 5: return 31;break;
		case 6: return 30;break;
		case 7: return 31;break;
		case 8: return 31;break;
		case 9: return 30;break;
		case 10:return 31;break;
		case 11:return 30;break;
		case 12:return 31;break;
	}
}
