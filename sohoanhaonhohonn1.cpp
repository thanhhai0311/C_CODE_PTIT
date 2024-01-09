#include<stdio.h>
#include<math.h>

int sum(int n){
	int sum=0;
	for(int i=1; i<=sqrt(n); i++){
		if(n%i==0){
			sum=sum+i+n/i;
			//printf("%d %d\n", i, n/i);
			//printf("%d", sum);
		} 
	}
	sum-=n;
	//if(sqrt(n)*sqrt(n)==n) sum-=sqrt(n);
	return sum;
}

int main(){
	//printf("%d", sum(36));
	int n;
	scanf("%d", &n);
	for(int i=2; i<n; i++){
		if(sum(i)==i) printf("%d ", i);
	}
}
