#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		int ok=1;
		for(int i=0; i<n/2; i++){
			if(a[i]!=a[n-i-1]){
				ok=0;
				break;
			}
		}
		if(ok==0) printf("NO\n");
		else printf("YES\n");
	}
}
