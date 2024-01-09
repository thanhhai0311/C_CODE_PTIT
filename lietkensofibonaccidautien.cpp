#include<stdio.h>

int main(){
	int fn2=0, fn1=1;
	int n;
	int dem=0;
	scanf("%d", &n);
	printf("0 1 ");
	for(int i=3; i<=92; i++){
		int fn=fn2+fn1;
		fn2=fn1;
		fn1=fn;
		dem++;
		if(dem<n-1){
			printf("%d ", fn);
		}
		else break;
	}
}
