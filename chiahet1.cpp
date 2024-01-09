#include<stdio.h>

int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	int dem=0;
	for(int i=2; i<=n; i*=2){
		dem+=n/i;
	}
	if(dem>=k) printf("Yes");
	else printf("No");
}
