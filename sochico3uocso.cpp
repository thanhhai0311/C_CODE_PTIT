#include <stdio.h>
#include <math.h>
#include <string.h>

int ktnt(long long n){
	int i, a, kt=0;
	if(n<2){
		return 1;
	}else if(n!=2 && n%2==0){
		return 1;
	}else if(n!=3 && n%3==0){
		return 1;
	}else{
		a=sqrt(n);
		for(i=5; i<=a; i+=6){
			if(n%i==0 || n%(i+2)==0){
				return 1;
			}
		}
	}
	return 0;
}

int main(){
	long long t, n, i, j, dem, m, a, b;
	scanf("%lld", &t);
	while(t--){
		scanf("%lld%lld", &n, &m);
		dem=0;
		a=sqrt(n);
		if(a*a!=n) a++;
		b=sqrt(m);
		for(i=a; i<=b; i++){
			if(ktnt(i)==0) dem++;
		}
		printf("%lld\n",dem);
	}
}


