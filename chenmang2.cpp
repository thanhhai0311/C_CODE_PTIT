#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int tc=1; tc<=t; tc++){
		int n, m, k;
		scanf("%d%d%d", &n, &m, &k);
		int a[n], b[m];
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		for(int i=0; i<m; i++){
			scanf("%d", &b[i]);
		}
		printf("Test %d:\n", tc);
		for(int i=0; i<k; i++){
			printf("%d ", a[i]);
		}
		for(int i=0; i<m; i++){
			printf("%d ", b[i]);
		}
		for(int i=k; i<n; i++){
			printf("%d ", a[i]);
		}
		printf("\n");	
	}
}
