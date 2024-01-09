#include <stdio.h>
#include <math.h>
#include <string.h>

int sumcs(int a){
	int s=0;
	while(a>0){
		s=s+a%10;
		a=a/10;
	}
	return s;
}
int ucln(int a, int b){
	int c=0;
	while(a%b!=0){
		c=a%b;
		a=b;
		b=c;
	}
	return b;
}
int ktnt(int n){
	int i, a, kt=0;
	if(n<2){
		return 1;
	}
	else if(n!=2&&n%2==0){
		return 1;
	}
	else if(n!=3&&n%3==0){
		return 1;
	}
	else{
		a=sqrt(n);
		for(i=5; i<=a; i+=6){
			if(n%i==0 || n%(i+2)==0){
				return 1;
			}
		}
	}
	return 0;
}

int main(){
	int n, m, i, j;
	scanf("%d%d", &m, &n);
	int arr[m+5][n+5];
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(j=0; j<n; j++){
		for(i=0; i<m; i++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

