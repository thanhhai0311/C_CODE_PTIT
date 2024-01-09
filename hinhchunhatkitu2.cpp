#include<stdio.h>

int max(int a, int b){
	if(a<b) return b;
	else return a;
}
int min(int a, int b){
	if(a<b) return a;
	else return b;
}

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i=1; i<=n; i++){
		printf("%c", 'A'+min(i-1, m-1));
		for(int j=i+1; j<=m; j++){
			if(j<=max(m-i, m-i)) printf("%c", (char)'A'+j-1);
			else printf("%c", (char)'A'+j-1);
		}
		for(int j=min(i-1, m-1); j>=1; j--){
			printf("%c", (char)'A'+j-1);
		}
		printf("\n");
	}
}
