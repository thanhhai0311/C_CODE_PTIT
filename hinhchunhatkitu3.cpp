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
		int tmp = min(i-1, m-1);
		for(int j=1; j<=m; j++){
			if(j<=max(m-i, m-i)) printf("%c", (char)'@'+tmp++);
			else printf("%c", (char)'@'+tmp);
		}
		printf("\n");
	}
}
