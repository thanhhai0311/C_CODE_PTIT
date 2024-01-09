#include<stdio.h>

int gt(int n){
	long long res=1;
	for(int i=2; i<=n; i++){
		res*=i;
	}
	return res;
}

int gtcs(int n){
	long long sum=0;
	while(n!=0){
		int r=n%10;
		sum+=gt(r);
		n/=10;
	}
	return sum;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		if(gtcs(i)==i) printf("%d ", i);
	}
}

