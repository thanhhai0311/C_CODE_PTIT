#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int tmp=1;
	for(int i=1; i<=n; i++){
		if(i%2==1){
			for(int j=tmp; j<=tmp+i-1; j++){
				printf("%c ", j+'a'-1);
			}
		}
		else{
			for(int j=tmp+i-1; j>=tmp; j--){
				printf("%c ", j+'a'-1);
			}
		}
		tmp+=i;
		printf("\n");
	}
}
