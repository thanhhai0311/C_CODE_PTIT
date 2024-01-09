#include<stdio.h>
#define MAX 100

void doicho(int *x, int *y){
	int tg=*x;
	*x=*y;
	*y=tg;
}
void xuatkq(int a[], int n, int i){
	printf("Buoc %d:", i);
	for(i=0; i<n; i++){
		printf("%3d", a[i]);
		
	}
	printf("\n");
}
void sxnb(int a[], int n){
	int i, j, kt;
	for(i=0; i<n-1; i++){
		kt=0;
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1]){
				doicho(&a[j],&a[j+1]);
				kt=1;
			}
			if(kt==0) break;
			xuatkq(a,n,i+1);	
	}
}
int main(){
	int n,i,a[MAX];
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	sxnb(a, n);
	return 0;
}
