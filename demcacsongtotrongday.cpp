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
	int t;
	scanf("%d", &t);
	for(int tc=1; tc<=t; tc++){
		int n;
		scanf("%d", &n);
		int a[n];
		int b[100005]={};
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
			b[a[i]]++;
		}
		printf("Test %d:\n", tc);
		for(int i=0; i<100005; i++){
			if(nto(i)==1 && b[i]!=0){
				printf("%d xuat hien %d lan\n", i, b[i]);
				//b[a[i]]=0;
			}
		}
	}
}
