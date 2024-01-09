#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	//int a[2*n-1][2*n-1];
	for(int i=-n+1; i<=n-1; i++){
		for(int j=-n+1; j<=n-1; j++){
			if(abs(i)>=abs(j)) printf("%d ", abs(i)+1);
			else printf("%d ", abs(j)+1);
		}
		printf("\n");
	}
//	for(int i=-n+1; i<n-1; i++){
//		for(int j=-n+1; j<n-1; j++){
//			printf("%d", a[i][j]);
//		}
//		printf("\n");
//	}
}
