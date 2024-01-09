#include<stdio.h>
#include<math.h>

int nto(long long n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long l, r;
		scanf("%lld%lld", &l, &r);
		long long dem=0;
		long long l1=sqrt(l);
		if(l1*l1!=l) l1++;
		long long r1=sqrt(r);
		for(long long i=l1; i<=r1; i++){
			if(nto(i)==1) dem++;
		}
		printf("%lld\n", dem);
	}
}
