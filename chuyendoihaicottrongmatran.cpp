#include<stdio.h>

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int mt[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &mt[i][j]);
		}
	}
	int a, b;
	scanf("%d%d", &a, &b);
	a--, b--;
	for(int i=0; i<n; i++){
		int tmp=mt[i][a];
		mt[i][a]=mt[i][b];
		mt[i][b]=tmp;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d ", mt[i][j]);	
		}
		printf("\n");
	}
}
