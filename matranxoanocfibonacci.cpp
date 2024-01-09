#include<stdio.h>

int main(){
	long long fibo[82];
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2; i<82; i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	int n;
	scanf("%d", &n);
	int dem=0;
	int a[n][n];
	int h1=0, h2=n-1, c1=0, c2=n-1;
	while(h1<=h2 && c1<=c2){
		for(int j=c1; j<=c2; j++){
			a[h1][j]=fibo[dem++];
		}
		h1++;
		for(int i=h1; i<=h2; i++){
			a[i][c2]=fibo[dem++];
		}
		c2--;
		for(int i=c2; i>=c1; i--){
			a[h2][i]=fibo[dem++];
		}
		h2--;
		for(int i=h2; i>=h1; i--){
			a[i][c1]=fibo[dem++];
		}
		c1++;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
