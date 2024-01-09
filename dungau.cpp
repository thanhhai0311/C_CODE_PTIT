#include <stdio.h>

int main(){
	int t; 
	scanf("%d", &t);
	while(t--){
		int n; 
		scanf("%d", &n);
		int a[n], b[n], idx = 1;
		for(int i=0; i<n; i++) scanf("%d", &a[i]);
		int res=a[n-1]; 
		b[0]=a[n - 1];
		for(int i=n-2; i>=0; i--){
			if(a[i]>res){
				res=a[i]; 
				b[idx]=a[i];
				idx++;
			}
		}
		for(int i=idx-1; i>=0; i--) printf("%d ", b[i]);
		printf("\n");
	}
}

