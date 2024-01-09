#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int b;
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n-1; i++){
		int f=a[i];
		for(int j=i+1; j<n; j++){
			if(f>a[j]) f=a[j];
		}
		for(int m=i+1; m<n; m++){
			if(a[m]==f){
				b=a[i];
				a[i]=a[m];
				a[m]=b;
			}
		}
		printf("Buoc %d: ", i+1);
		for(int k=0; k<n; k++){
			printf("%d ", a[k]);
		}
		printf("\n");
	}
	return 0;
}
