#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n=0;
		int demle=0, demchan=0;
		char kt=' ';
		while(kt!='\n'){
			int x;
			scanf("%d", &x);
			n++;
			if(x%2==0) demchan++;
			else demle++;
			kt=getchar();
		}
		if((n%2==0 && demchan>demle) || (n%2==1 && demle>demchan)){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
