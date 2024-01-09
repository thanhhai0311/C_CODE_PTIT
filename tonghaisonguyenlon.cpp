#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[500], b[500];
		scanf("%s%s", a, b);
		int na=strlen(a);
		int nb=strlen(b);
		int max;
		if(na>nb) max=na;
		else max=nb;
		int a1[max];
		int b1[max];
		int res[max+1];
		int n=0;
		for(int i=0; i<na; i++){
			a1[na-i-1]=a[i]-'0';
		}
		for(int i=0; i<nb; i++){
			b1[nb-i-1]=b[i]-'0';
		}
		if(na>nb){
			for(int i=nb; i<max; i++){
				b1[i]=0;
			}
		}
		else{
			for(int i=na; i<max; i++){
				a1[i]=0;
			}
		}
		int nho=0;
		for(int i=0; i<max; i++){
			int tmp=a1[i]+b1[i]+nho;
			res[n++]=tmp%10;
			nho=tmp/10;
		}
		if(nho!=0) res[n++]=nho;
		for(int i=n-1; i>=0; i--){
			printf("%d", res[i]);
		}
		printf("\n");
	}
}
