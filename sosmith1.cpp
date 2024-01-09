#include<stdio.h>
#include<math.h>

int tong(int n){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int main(){
	int n;
	scanf("%d", &n);
	int tmp=n;
	int sum=0;
	for(int i=2; i<=sqrt(tmp); i++){
		if(n%i==0){
			while(n%i==0){
				sum+=tong(i);
				n/=i;
			}
		}
	}
	if(n>1) sum+=tong(n);
//	printf("%d", sum);
	if(tong(tmp)==sum) printf("YES");
	else printf("NO");
}
