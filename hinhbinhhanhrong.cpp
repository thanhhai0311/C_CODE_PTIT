#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=2*n-i; j++){
			if(j<=n-i) printf("~");
			else if(i==1 || i==n || j==2*n-i || j==n-i+1){
				printf("*");
			}
			else printf(".");
		}
		printf("\n");
	}
}
