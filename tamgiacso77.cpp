#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		int tmp=i;
		for(int j=1; j<=i; j++){
			printf("%d ", tmp);
			tmp=tmp+(n-j);
		}
		printf("\n");
	}
}
