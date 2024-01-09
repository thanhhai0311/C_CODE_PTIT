#include <stdio.h>
#include <math.h>

int kt(int n){
	while(n>0) {
		if((n/10)%10>n%10) return 1;
		n/=10;
	}
	return 0;
}

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int n, x, y;
		scanf("%d", &n);
		x=pow(10,n);
		y=pow(10,n-1);
		for(int i=y;i<x;i++){
			if(kt(i)==0) 
			printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
