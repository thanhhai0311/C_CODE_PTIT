#include<stdio.h>
#include<string.h>

int check1(char a[]){
	for(int i=0; i<strlen(a)/2; i++){
		if(a[i]!=a[strlen(a)-i-1]) return 0;
	}
	return 1;
}

int check2(char a[]){
	for(int i=0; i<strlen(a); i++){
		if((a[i]-'0')%2!=0) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[500];
		scanf("%s", a);
		if(check1(a)==1 && check2(a)==1) printf("YES\n");
		else printf("NO\n");
	}
}
