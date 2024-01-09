#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m, k;
		scanf("%d%d%d", &n, &m, &k);
		int a[n][m];
		int cot[n];
		int pos=0;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				scanf("%d", &a[i][j]);
				if(j==k-1){
					cot[pos++]=a[i][j];
				}
			}
		}
		for(int i=0; i<pos-1; i++){
			for(int j=i+1; j<pos; j++){
				if(cot[i]>cot[j]){
					int tmp=cot[i];
					cot[i]=cot[j];
					cot[j]=tmp;
				}
			}
		}
		pos=0;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(j==k-1){
					a[i][j]=cot[pos++];
				}
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
}
