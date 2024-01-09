#include<stdio.h>

int main(){
	long long fibo[93];
	fibo[1]=0, fibo[2]=1;
	for(int i=3; i<93; i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int ok=0;
		for(int i=1; i<93; i++){
			if(fibo[i]==n){
				ok=1;
				printf("YES\n");
				break;
			}
		}
		if(ok==0) printf("NO\n");
	}
}
