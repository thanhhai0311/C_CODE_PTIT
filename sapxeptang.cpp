#include<stdio.h>

void Swap(int *a, int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;	
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[j]<a[i]){
				Swap(&a[i], &a[j]);
			}
		}
	}
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}
