#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[1000];
		scanf("%s", a);
		if(a[0]=='0'){
			printf("INVALID\n");
			continue;
		}
		else{
			int ok=1;
			int demchan=0, demle=0;
			for(int i=0; i<strlen(a); i++){
				if(a[i]<'0' || a[i]>'9'){
					ok=0;
					break;
				}
				else if((a[i]-'0')%2==0) demchan++;
				else demle++;
			}
			if(ok==0) printf("INVALID\n");
			else{
				if(demchan==demle) printf("NO\n");
				else{
					if((strlen(a)%2==0 && demchan>demle) || ((strlen(a)%2==1 && demchan<demle))){
						printf("YES\n");
					}
					else printf("NO\n");
				}
			}
		}
	}
}
