#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		while(b!=0){
			int r=a%b;
			a=b;
			b=r;
		}
		printf("%d\n", a);
	}
}
