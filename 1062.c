#include <stdio.h>
#include <string.h>

int main(void)
{
	int t, iLen, i, j, k = 0;
	char str[1001], temp[1001];

	freopen("test.in", "r", stdin);
	while(scanf("%d", &t) != EOF)
	{
		getchar();	//接收数字T末尾的换行符
		for(i=1; i<=t; i++)
		{
			gets(str);
			iLen = strlen(str);
			for(j=1; j<=iLen; j++)	//遍历第i个字符串
			{
				if(str[j-1] == 32)	//判断出现空格符的位置
				{
					for(; k>0; k--)
						temp[k-1] = str[j-1-k];
					if(strlen(temp) != 0)	//判断temp字符串不为空才输出
					{
						printf("%s ", temp);	//每次使用temp[]后都将其置为空
						memset(temp,0,strlen(temp));
					}
				}
				else
					k++;
				if(j == iLen)	//判断最后一个字符串片段
				{
					for(; k>0; k--)
						temp[k-1] = str[j-k];
					printf("%s\n", temp);	//每次使用temp[]后都将其置为空
					memset(temp,0,strlen(temp));
				}
			}
		}
	}
	fclose(stdin);

	return 0;
}

/*
char *Reverse(char str[]);

int main(void)
{
	char str[10]="olleh";
	printf("%s\n", Reverse(str));

	return 0;
}

char *Reverse(char str[])	//字符串逆序函数
{
	int iLen, i;
	char temp[1001];

	iLen = strlen(str);
	for(i=1; i<=iLen; i++)
	{
		temp[iLen-i] = str[i-1];
	}
	
	return temp;
}
*/
