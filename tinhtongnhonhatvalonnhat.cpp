#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[100], b[100];
		scanf("%s%s", a, b);
		char c[100], d[100];
		long long max, min;
		for(int i=0; i<strlen(a); i++){
			c[i]=a[i];
			if(a[i]=='5') a[i]='6';
		}
		for(int i=0; i<strlen(b); i++){
			d[i]=b[i];
			if(b[i]=='5') b[i]='6';
		}
		max=atoll(a)+atoll(b);
		for(int i=0; i<strlen(c); i++){
			if(c[i]=='6') c[i]='5';
		}
		for(int i=0; i<strlen(d); i++){
			if(d[i]=='6') d[i]='5';
		}
		min=atoll(c)+atoll(d);
		printf("%lld %lld\n", min, max);
	}	
}
