#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int tc=1; tc<=t; tc++){
		int n, m;
		scanf("%d%d", &n, &m);
		int a[n][m];
		int cot, hang;
		int maxh=-1e9, maxc=-1e9;
		for(int i=0; i<n; i++){
			int tongh=0;
			for(int j=0; j<m; j++){
				scanf("%d", &a[i][j]);
				tongh+=a[i][j];
			}
			if(tongh>maxh){
				maxh=tongh;
				hang=i;
			}
		}
		for(int j=0; j<m; j++){
			int tongc=0;
			for(int i=0; i<n; i++){
				if(i!=hang){
					tongc+=a[i][j];
				}
			}
			if(tongc>maxc){
				maxc=tongc;
				cot=j;
			}
		}
		printf("Test %d:\n", tc);
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(i!=hang && j!=cot){
					printf("%d ", a[i][j]);
				}
			}
			printf("\n");
		}
	}
}
