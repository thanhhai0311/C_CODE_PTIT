#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int tc=1; tc<=t; tc++){
		int n;
		scanf("%d", &n);
		int tmp=n*n;
		int a[n][n];
		int h1=0, h2=n-1, c1=0, c2=n-1;
		while(h1<=h2 && c1<=c2){
			for(int j=c1; j<=c2; j++){
				a[h1][j]=tmp--;
			}
			h1++;
			for(int i=h1; i<=h2; i++){
				a[i][c2]=tmp--;
			}
			c2--;
			for(int i=c2; i>=c1; i--){
				a[h2][i]=tmp--;
			}
			h2--;
			for(int i=h2; i>=h1; i--){
				a[i][c1]=tmp--;
			}
			c1++;
		}
		printf("Test %d:\n", tc);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
}
