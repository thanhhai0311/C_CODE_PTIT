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
	int a, b;
	scanf("%d%d", &a, &b);
	int maxx, minn;
	if(a>b){
		maxx=a;
		minn=b;
	}
	else{
		maxx=b; 
		minn=a;
	}
	for(int i=minn; i<=maxx; i++){
		if(gtcs(i)==i) printf("%d ", i);
	}
}

