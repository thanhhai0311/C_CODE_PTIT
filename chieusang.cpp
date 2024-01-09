#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){
	int *x=(int*)a;
	int *y=(int*)b;
	return *x-*y;
}

int main(){
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	int a[m];
	for(int i=0; i<m; i++){
		scanf("%d", &a[i]);
	}
	int dem=0;
	qsort(a, m, sizeof(int), cmp);
	for(int i=1; i<m; i++){
		if(a[i]-a[i-1]>2*k) dem++;
	}
	if(n-a[m-1]>k) dem++;
	printf("%d", dem);
}
