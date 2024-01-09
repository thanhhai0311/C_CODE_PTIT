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
	int a[n][n];
	int max=0;
	int hang;
	for(int i=0; i<n; i++){
		int dem=0;
		for(int j=0; j<n; j++){
			 scanf("%d", &a[i][j]);
			 if(nto(a[i][j])==1) dem++;
		}
		if(dem>max){
			max=dem;
			hang=i;
		}
	}
	printf("%d\n", hang+1);
	for(int j=0; j<n; j++){
		if(nto(a[hang][j])==1) printf("%d ", a[hang][j]);
	}
}
