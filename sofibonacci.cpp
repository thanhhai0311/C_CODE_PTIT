#include<stdio.h>

long long fibo[93];

void Fibo(int n){
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2; i<n; i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}

int main(){
	Fibo(93);
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%lld\n", fibo[n]);
	}
}
