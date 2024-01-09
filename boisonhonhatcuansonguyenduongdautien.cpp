#include<stdio.h>

long long bsnn(long long a, long long b){
	long long tich=a*b;
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
//		b=a;
//		a=r;
	}
	return tich/a;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		long long res=1;
		for(long long i=2; i<=n; i++){
			res=bsnn(res, i);
		}
		printf("%lld\n", res);
	}
}
