#include <stdio.h>
int main(){
	int a, b;
	freopen("test.in", "r", stdin);
	while(scanf("%d%d", &a, &b) != EOF){
		printf("%d\n", a + b);
	}
    fclose(stdin);
	return 0;
}
