#include<stdio.h>
#include<math.h>

void phantich(int n){
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			printf("%d", i);
			if(n>i) printf("x");
			n/=i;
		}
	}
	if(n!=1){
		printf("%d", n);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	phantich(n);
}
