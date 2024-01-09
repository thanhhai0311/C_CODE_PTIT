#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int tc=1; tc<=t; tc++){
		int n, m;
		scanf("%d%d", &n, &m);
		int a[n][m];
		int res[n][n];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				res[i][j]=0;
				for(int k=0; k<m; k++){
					res[i][j]+=a[i][k]*a[j][k];
				}
			}
		}
		printf("Test %d:\n", tc);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				printf("%d ", res[i][j]);
			}
			printf("\n");
		}
	}
}
