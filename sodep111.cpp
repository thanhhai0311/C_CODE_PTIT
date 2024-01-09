#include<stdio.h>
#include<string.h>
#include<string.h>
#include<ctype.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[100];
		scanf("%s", c);
		if((c[0]-'0')/2==(c[strlen(c)-1]-'0') || (c[0]-'0')*2==(c[strlen(c)-1]-'0')){
			int ok=1;
			for(int i=1; i<=(strlen(c)-1)/2; i++){
				if(c[i]!=c[strlen(c)-i-1]){
					ok=0;
					break;
				}
			}
			if(ok==1) printf("YES\n");
			else printf("NO\n");
		}
		else printf("NO\n");
	}
}
