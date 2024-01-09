#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int sum=0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			sum+=i+(n/i);
		}
	}
	sum++;
	if(sqrt(n)*sqrt(n)==n) sum-=sqrt(n);
	if(sum==n) printf("1");
	else printf("0");
}
