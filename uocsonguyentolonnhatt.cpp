#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		long long res;
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0){
				while(n%i==0){
					res=i;
					n/=i;
				}
			}
		}
		if(n>1) res=n;
		printf("%lld\n", res);
	}
}
