#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int dem[n+1];
	for(int i=0; i<=n; i++){
		dem[i]=0;
	}
	for(int i=1; i<n; i++){
		int a, b;
		scanf("%d%d", &a, &b);
		dem[a]++;
		dem[b]++;
	}
	for(int i=0; i<=n; i++){
		if(dem[i]>=n-1){
			printf("Yes");
			return 0;
		}
	}
	printf("No");
}
