#include<stdio.h>
#include<math.h>

int sum(int n){
	int sum=0;
	for(int i=1; i<=sqrt(n); i++){
		if(n%i==0){
			sum=sum+i+n/i;
		} 
	}
	sum-=n;
	//if(sqrt(n)*sqrt(n)==n) sum-=sqrt(n);
	return sum;
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a<b){
		for(int i=a; i<=b; i++){
			if(i!=1 && sum(i)==i) printf("%d ", i);
		}
	}
	else{
		for(int i=b; i<=a; i++){
			if(i!=1 && sum(i)==i) printf("%d ", i);
		}
	}
}
