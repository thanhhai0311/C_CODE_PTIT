#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int b[1000];
	for(int i=0; i<1000; i++){
		b[i]=0;
	}
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		b[a[i]]++;
	}
	int dem=0;
	int c[100];
	for(int i=0; i<n; i++){
		if(b[a[i]]==1){
			c[dem]=a[i];
			dem++;
			b[a[i]]=0;
		}
	}
	printf("%d\n", dem);
	for(int i=0; i<dem; i++){
		printf("%d ", c[i]);
	}
}
