#include<stdio.h>

int gt(int n){
	long long res=1;
	for(int i=2; i<=n; i++){
		res*=i;
	}
	return res;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[100][100];
	for(int i=0; i<n; i++){
		a[i][0]=1;
		a[i][i]=1;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(j<=i && j!=0 && i!=j){
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
