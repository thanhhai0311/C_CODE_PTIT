#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	for(int i=0; i<n; i++){
		int tmp=1;
		for(int j=0; j<n; j++){
			if(j<=i) a[i][j]=0;
			else{
				a[i][j]=tmp++;
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
