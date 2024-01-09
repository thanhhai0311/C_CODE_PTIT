#include<stdio.h>
#include<math.h>

int check(int n){
	while(n>=10){
		int rs=n%10;
		int rt=(n/10)%10;
		if(rs<rt) return 0;
		else n/=10;
	}
	return 1;
}


int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int x=pow(10,n);
		int y=pow(10,n-1);
		for(int i=y; i<x; i++){
			if(check(i)==1) printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
