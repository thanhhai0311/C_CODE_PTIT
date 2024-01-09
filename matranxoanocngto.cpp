#include<stdio.h>
#include<math.h>

int nto[100001]={};

void sang(){
	nto[0]=nto[1]=1;
	for(int i=2; i<=sqrt(2741*2741); i++){
		if(nto[i]==0){
			for(int j=i*i; j<=sqrt(2741*2741); j+=i){
				nto[j]=1;
			}
		}
	}
}

int main(){
	sang();
	int tmp[401];
	int s=0;
	for(int i=2; i<=2741; i++){
		if(nto[i]==0){
			tmp[s]=i;
			s++;
		}
	}
//	for(int i=0; i<s; i++){
//		printf("%d ", tmp[i]);
//	}
	int t;
	scanf("%d", &t);
	for(int tc=1; tc<=t; tc++){
		int n;
		scanf("%d", &n);
		int dem=0;
		int a[n][n];
		int h1=0, h2=n-1, c1=0, c2=n-1;
		while(h1<=h2 && c1<=c2){
			for(int j=c1; j<=c2; j++){
				a[h1][j]=tmp[dem++];
			}
			h1++;
			for(int i=h1; i<=h2; i++){
				a[i][c2]=tmp[dem++];
			}
			c2--;
			for(int i=c2; i>=c1; i--){
				a[h2][i]=tmp[dem++];
			}
			h2--;
			for(int i=h2; i>=h1; i--){
				a[i][c1]=tmp[dem++];
			}
			c1++;
		}
		printf("Test %d:\n", tc);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
}
