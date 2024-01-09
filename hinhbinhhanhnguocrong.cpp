#include<stdio.h>

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i=n; i>=1; i--){
		for(int j=1; j<=(m+n)-i; j++){
			if(j<=n-i) printf("~");
			else if(i==1 || i==n || j==m+n-i || j==n-i+1){
				printf("*");
			}
			else printf("."); 
		}
		printf("\n");
	}
}
