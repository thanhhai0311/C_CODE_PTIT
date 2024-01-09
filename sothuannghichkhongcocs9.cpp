#include<stdio.h>

int check(int n){
	int res=0;
	int tmp=n;
	int ok=1;
	while(n!=0){
		int du=n%10;
		if(du==9) ok=0;
		res=res*10+du;
		n/=10;
	}
	if(ok==1 && res==tmp) return 1;
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	int dem=0;
	for(int i=2; i<=n; i++){
		if(check(i)==1){
			printf("%d ", i);
			dem++;
		}
	}
	printf("\n%d", dem);
}
