#include<stdio.h>

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i=n; i>=1; i--){
		for(int j=1; j<=(m+n)-i; j++){
			if(j<=n-i) printf("~");
			else printf("*"); 
		}
		printf("\n");
	}
}
