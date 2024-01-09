#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int tc=1; tc<=t; tc++){
		int n;
		scanf("%d", &n);
		int a[n], b[n];
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		for(int i=0; i<n; i++){
			scanf("%d", &b[i]);
		}
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(a[i]>a[j]){
					int tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
				}
			}
		}
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(b[i]<b[j]){
					int tmp=b[i];
					b[i]=b[j];
					b[j]=tmp;
				}
			}
		}
		int res[2*n];
		int dema=0, demb=0;
		for(int i=0; i<2*n; i++){
			if(i%2==0){
				res[i]=a[dema++];
			}
			else{
				res[i]=b[demb++];
			}
		}
		printf("Test %d:\n", tc);
		for(int i=0; i<2*n; i++){
			printf("%d ", res[i]);
		}
		printf("\n");
	}
}
