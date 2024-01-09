#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int check(char a[]){
	if(a[0]<a[1] && a[1]<a[2] && a[2]<a[3] && a[3]<a[4]) return 1;
	if(a[0]==a[1] && a[1]==a[2] && a[2]==a[3] && a[3]==a[4]) return 1;
	if(a[0]==a[1] && a[1]==a[2] && a[3]==a[4]) return 1;
	for(int i=0; i<strlen(a); i++){
		if(a[i]!='8' && a[i]!='6') return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		getchar();
		char a[1000];
		gets(a);
		char tmp[5];
		int dem=4;
		for(int i=strlen(a)-1; i>=0; i--){
			if(isdigit(a[i])==1){
				tmp[dem]=a[i];
				dem--;
			}
			if(dem==-1) break;
		}
		if(check(tmp)==1){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
