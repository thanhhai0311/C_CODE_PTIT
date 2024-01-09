#include<stdio.h>
#include<math.h>

int nto(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int dem=0;
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		if(nto(a[i])==1) dem++;
	}
	printf("%d ", dem);
	for(int i=0; i<n; i++){
		if(nto(a[i])==1) printf("%d ", a[i]);
	}
}
