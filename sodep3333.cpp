#include<stdio.h>

int check(long long n){
	int sum=0;
	long long res=0;
	long long tmp=n;
	int ok=0;
	while(n!=0){
		int du=n%10;
		if(du==6) ok=1;
		sum+=du;
		res=res*10+du;
		n/=10;
	}
	if(sum%10==8 && ok==1 && res==tmp) return 1;
	return 0;
}

int main(){
	long long a, b, l, r;
	scanf("%lld%lld", &a, &b);
	int dem=0;
	if(a>b) l=b, r=a;
	else l=a, r=b;
	for(long long i=l; i<=r; i++){
		if(check(i)==1) printf("%lld ", i);
	}
	//printf("%d", dem);
}
