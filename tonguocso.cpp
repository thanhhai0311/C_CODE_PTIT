#include<stdio.h>
#include<math.h>
#include<string.h>
 
int main(){
	int n, a, b, t, i;
	long long s=0;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int k=n;
		if(n==1){
			s=s+1;
			continue;
		}
		for(i=2; i<=n; i++){
			a=0;
			while(n%i==0){
				a++;
				n=n/i;
			}
			if(a!=0) s=s+i*a;
			if(n==1) break;
			b=sqrt(n);
			if(n==3){
				s=s+3;
				break;
			}else if(n%3==0){
				continue;
			}else{
				int j;
				for(j=5; j<=b; j+=6){
					if(n%j==0){
						i=j-1;
						break;
					}
					if(n%(j+2)==0){
						i=j+1;
						break;
					}
				}
				if(j>b){
					s=s+n;
					break;
				}
			}
		}
	}
	printf("%lli",s);
}


