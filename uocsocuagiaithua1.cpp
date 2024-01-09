#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, p;
		scanf("%d%d", &n, &p);
		int dem=0;
		for(int i=p; i<=n; i+=p){
			int tmp=i;
			while(tmp%p==0){
				dem++;
				tmp/=p;
			}
		}
		printf("%d\n", dem);
	}
}
