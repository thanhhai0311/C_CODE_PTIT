#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[100];
		scanf("%s", a);
		int dem=0;
		int n=strlen(a);
		for(int i=0; i<=strlen(a)/2; i++){
			if(a[i]!=a[strlen(a)-i-1]) dem++;
		}
		if((a%2==0 && dem==1) || (a%2==1 && dem<=1)) printf("YES\n");
		else printf("NO\n");
	}
}
