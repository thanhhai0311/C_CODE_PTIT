#include<stdio.h>
#include<math.h>

int nto(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int check(int n){
	while(n!=0){
		int r=n%10;
		if(r!=2 && r!=3 && r!=5 && r!=7) return 0;
		else n/=10;
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
			if(nto(i)==1&& check(i)==1) dem++;
		}
		printf("%d\n", dem);
	}
}

