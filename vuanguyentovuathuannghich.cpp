#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int nto(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int thuannghich(int n){
	int res=0;
	while(n!=0){
		int tmp=n%10;
		res=res*10+tmp;
		n/=10;
	}
//	if(res==n) return 1;
//	else return 0;
	return res;
}

int main(){
	int t;
	scanf("%d", &t);
//	printf("%d", thuannghich(101));
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		int dem=0;
		for(int i=a; i<=b; i++){
			if(nto(i)==1 && thuannghich(i)==i){
				printf("%d ", i);
				dem++;
				if(dem%10==0) printf("\n");
			}
		}
		printf("\n\n");
	}
}

