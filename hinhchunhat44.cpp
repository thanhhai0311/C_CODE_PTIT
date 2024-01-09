#include<stdio.h>

int max(int a, int b){
	if(a<b) return b;
	else return a;
}

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i=max(m, n); i>=max(m, n)-n+1; i--){
	//	printf("%d", i);
		int tmp = i;
		for(int j=1; j<=m; j++){
			if(j<=i-1) printf("%d", tmp--);
			else printf("%d", tmp++);
		}
		printf("\n");
	}
}
