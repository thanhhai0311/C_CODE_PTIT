#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int tc=1; tc<=t; tc++){
		int n;
		scanf("%d", &n);
		int a[n][n];
		for(int i=0; i<n; i++){
			for(int j=0; j<=i; j++){
				a[i][j]=j+1;
			}
			for(int j=i+1; j<n; j++){
				a[i][j]=0;
			}
		}
		int res[n][n];
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				res[i][j]=0;
				for(int k=0; k<n; k++){
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
