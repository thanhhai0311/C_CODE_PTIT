#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=1; j<n-i; j++){
			printf("~");
		}
		for(int j=1; j<=i+1; j++){
			printf("%d", 2*j);
		}
		for(int j=i; j>0; j--){
			printf("%d", 2*j);
		}
		printf("\n");
	}
}
