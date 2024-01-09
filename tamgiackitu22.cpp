#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=n; i>=1; i--){
		int tmp=1+(n-i)*2;
		for(int j=1; j<=i; j++){
			printf("%c", (char)'A'+tmp-1);
			tmp+=2;
		}
		printf("\n");
	}
}
