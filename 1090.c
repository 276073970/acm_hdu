#include <stdio.h>

int main(){
	int a, b, N, i;
    freopen("test.in", "r", stdin);
	while(scanf("%d", &N) != EOF){
		for(i=0; i<N; i++){
			scanf("%d%d", &a, &b);
			printf("%d\n", a + b);
		}
	}
	fclose(stdin);
	return 0;
}
