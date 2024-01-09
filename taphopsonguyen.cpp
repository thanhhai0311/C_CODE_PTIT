#include<stdio.h>

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n], b[m];
	int cnta[1000]={}, cntb[1000]={};
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		cnta[a[i]]=1;
	} 
	for(int i=0; i<m; i++){
		scanf("%d", &b[i]);
		cntb[b[i]]=1;
	} 
	for(int i=0; i<=1000; i++){
		if(cnta[i]==1 && cntb[i]==1) printf("%d ", i);
	}
	printf("\n");
	for(int i=0; i<=1000; i++){
		if(cnta[i]==1 && cntb[i]==0) printf("%d ", i);
	}
	printf("\n");
	for(int i=0; i<=1000; i++){
		if(cnta[i]==0 && cntb[i]==1) printf("%d ", i);
	}
	printf("\n");
}
