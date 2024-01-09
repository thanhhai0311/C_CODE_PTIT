#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	long long sum=0;
	while(t--){
		int n, i;
		scanf("%d", &n);
		int tong=0;
		for(i=2; i<=sqrt(n); i++){
			//if(n%i==0){
				while(n%i==0){
					tong+=i;
					n/=i;
				}
			//}
		}
		if(n!=1) tong+=n;
		sum+=tong;
	}
	printf("%lld", sum);
}
