#include<stdio.h>

int check(long long n){
	while(n!=0){
		if((n%10)%2==1) return 0;
		else n/=10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(n%2==0 && check(n)==1) printf("YES\n");
		else printf("NO\n");
	}
}
