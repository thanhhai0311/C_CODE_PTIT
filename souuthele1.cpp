#include<stdio.h>

int check(long long n){
	int demchan=0, demle=0;
	if(n%2==0) return 0;
	while(n!=0){
		if((n%10)%2==0) demchan++;
		else demle++;
		n/=10;
	}
	if(demle>demchan) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(check(n)==1) printf("YES\n");
		else printf("NO\n");
	}
}
