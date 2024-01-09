#include<stdio.h>

int main(){
	int a[10]={1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int dem=0;
		for(int i=0; i<10; i++){
			dem+=n/a[i];
			n=n-a[i]*(n/a[i]);
		}
		printf("%d\n", dem);
	}
}
