#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int res[n];
	res[0]=a[0];
	printf("Buoc 0: %d\n", res[0]);
	for(int i=1; i<n; i++){
		int x=a[i], pos=i-1;
		while(x<res[pos] && pos>=0){
			res[pos+1]=res[pos];
			pos--;
		}
		res[pos+1]=x;
		printf("Buoc %d: ", i);
		for(int j=0; j<=i; j++){
			printf("%d ", res[j]);
		}
		printf("\n");
	}
}
