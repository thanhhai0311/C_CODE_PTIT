#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[100];
		scanf("%s", a);
		int demchan=0;
		int demle=0;
		for(int i=0; i<strlen(a); i++){
			if((a[i]-'0') % 2==0) demchan++;
			else demle++;
		}
		printf("%d %d\n", demle, demchan);
	}
	
}
