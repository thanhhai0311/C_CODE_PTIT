#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		int tmp=1;
		for(int j=1; j<=2*i+1; j++){
			printf("%d", tmp++);
		}
		printf("\n");
	}
}
