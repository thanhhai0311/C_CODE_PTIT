#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int demle=0, demchan=0;
		int a=n;
		while(n!=0){
			int tmp=n%10;
			if(tmp%2==0) demchan++;
			else demle++;
			n/=10;
		}
		if(a%2!=0 && demle>demchan){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
