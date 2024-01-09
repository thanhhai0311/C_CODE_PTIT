#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%d", &n);
		printf("%.15f\n", (double)1/n);
	}
}
