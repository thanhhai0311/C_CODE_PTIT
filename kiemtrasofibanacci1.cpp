#include<stdio.h>

int main(){
	int fn2=0, fn1=1;
	int n;
	scanf("%d", &n);
	for(int i=3; i<=92; i++){
		int fn=fn2+fn1;
		fn2=fn1;
		fn1=fn;
		if(fn==n){
			printf("1");
			return 0;
		}
	}
	printf("0");
}
