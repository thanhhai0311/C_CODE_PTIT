#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int test=1; test<=t; test++){
		int n;
		scanf("%d", &n);
		printf("Test %d: ", test);
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0){
				int dem=0;
				while(n%i==0){
					dem++;
					n/=i;
				}
				printf("%d(%d) ", i, dem);
			}
		}
		if(n>1) printf("%d(%d)", n, 1);
		printf("\n");
	}
}
