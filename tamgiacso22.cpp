#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		int tmp;
		if(i%2==0) tmp=2;
		else tmp=1;
		for(int j=1; j<=i; j++){
			printf("%d", tmp);
			tmp+=2;
		}
		printf("\n"); 
	}
}
