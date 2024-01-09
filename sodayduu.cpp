#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[1000];
		scanf("%s", c);
		int cnt[10]={0};
		int ok1=1;
		if(c[0]=='0') ok1=0;
		else{
			for(int i=0; i<strlen(c); i++){
				if(c[i]<'0' || c[i]>'9'){
					ok1=0;
					break;
				}
				else{
					cnt[c[i]-'0']=1;
				}
			}
		}
		if(ok1==0) printf("INVALID\n");
		else{
			int ok=1;
			for(int i=0; i<10; i++){
				if(cnt[i]==0){
					ok=0;
					break;
				}
			}
			if(ok==1) printf("YES\n");
			else printf("NO\n");
		}
	}
}
