#include<stdio.h>

// 0
// 0 2
// 0 2 4 2 0
// 0 2 4 6 4 2 0
// 0 2 4 6 8 6 4 2 0

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<=2*i; j+=2){
			printf("%c", j+'@');
		}
		for(int j=2*(i-1); j>=0; j-=2){
			printf("%c", j+'@');
		}
		printf("\n");
	}
}
