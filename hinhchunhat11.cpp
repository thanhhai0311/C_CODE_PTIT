#include<stdio.h>

int min(int a, int b){
	if(a<b) return a;
	else return b;
}

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i=1; i<=n; i++){
		printf("%d", i);
		for(int j=i+1; j<=m; j++){
			printf("%d", j);
		}
		for(int j=min(i-1, m-1); j>=1; j--){
			printf("%d", j);
		}
		printf("\n");
	}
}
