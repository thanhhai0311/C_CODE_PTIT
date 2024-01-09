#include<stdio.h>
#include<math.h>

int check(long long n){
	int sum=0;
	long long res=0;
	long long tmp=n;
	while(n!=0){
		int du=n%10;
		sum+=du;
		res=res*10+du;
		n/=10;
	}
	if(sum%10==0 && res==tmp) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		long long l=pow(10, n-1);
		long long r=pow(10, n);
		long long dem=0;
		for(long long i=l; i<r; i++){
			if(check(i)==1) dem++;
		}
		printf("%lld\n", dem);
	}
}
