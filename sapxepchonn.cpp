#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n-1; i++){
		int pos=i;
		for(int j=i+1; j<n; j++){
			if(a[j]<a[pos]){
				pos=j;
			}
		}
		if(a[pos]!=a[i]){
			int tmp=a[i];
			a[i]=a[pos];
			a[pos]=tmp;
		}
		printf("Buoc %d: ", i+1);
		for(int k=0; k<n; k++){
			printf("%d ", a[k]);
		}
		printf("\n");
	}
}
