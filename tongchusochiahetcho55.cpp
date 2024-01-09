#include<stdio.h>
#include<math.h>

int nto(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}	
	return 1;
}

int sum(int n){
	int tong=0;
	while(n!=0){
		tong+=n%10;
		n/=10;
	}
	return tong;
}

int main(){
	int n;
	scanf("%d", &n);
	int dem=0;
	for(int i=2; i<=n; i++){
		if(nto(i)==1 && sum(i)%5==0){
			printf("%d ", i);
			dem++;
		}
	}
	printf("\n%d", dem);
}
