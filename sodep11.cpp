#include<stdio.h>
#include<math.h>

int nto(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int check(int m, long long a[], int n){
	for(int i=1; i<=n; i++){
		if(a[i]==m) return 1;
	}
	return 0;
}

int sum(int n){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int max, min;
	if(a>b){
		max=a, min=b;
	}
	else{
		max=b, min=a;
	}
	long long fn[93];
 	fn[1]=0, fn[2]=1;
	for(int i=3; i<=92; i++){
		fn[i]=fn[i-1]+fn[i-2];
	}
	for(int i=min; i<=max; i++){
		if(nto(i)==1 && check(sum(i), fn, 92)==1) printf("%d ", i);
	}
}
