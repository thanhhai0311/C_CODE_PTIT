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
	for(int i=0; i<n; i++){
		if(b[a[i]]>0){
			printf("%d %d\n", a[i], b[a[i]]);
			b[a[i]]=0;
		}
	}
}
