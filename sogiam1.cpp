#include<stdio.h>

int check(int n){
	while(n>=10){
		int rs=n%10;
		int rt=(n/10)%10;
		if(rs>=rt) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		int dem=0;
		for(int i=a; i<=b; i++){
			if(check(i)==1) dem++;
		}
		printf("%d\n", dem);
	}
}
