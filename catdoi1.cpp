#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[100];
		scanf("%s", c);
		int ok=1;
		int check0=0;
		for(int i=0; i<strlen(c); i++){
			if(c[i]!='0' && c[i]!='1' && c[i]!='8' && c[i]!='9'){
				ok=0;
				break;
			}
			if(c[i]=='8') c[i]='0';
			if(c[i]=='9') c[i]='0';
			if(c[i]!='0') check0=1;
		}
		if(check0==0 || ok==0) printf("INVALID\n");
		else printf("%lld\n", atoll(c));
	}
}
