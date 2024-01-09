#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	long long a, b, k, k1, k2, k3, k4, t, s;
	scanf("%lld", &t);
	while(t--){
		scanf("%lld%lld", &a, &b);
		k1=k2=a;
		k3=k4=b;
		k=0;
		while(a>0 || b>0){
			if(a%10==6){
				s=pow(10,k);
				k1=k1-s;
			}
			if(b%10==6){
				s=pow(10,k);
				k3=k3-s;
			}
			if(a%10==5){
				s=pow(10,k);
				k2=k2+s;
			}
			if(b%10==5){
				s=pow(10,k);
				k4=k4+s;
			}
			k++;
			a=a/10;
			b=b/10;
		}
		printf("%lld %lli\n", k1+k3, k2+k4);
	}
}
