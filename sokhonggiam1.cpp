#include<stdio.h>
#include<string.h>

int check(char a[]){
	for(int i=0; i<strlen(a)-1; i++){
		if(a[i]>a[i+1]) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[100];
		scanf("%s", a);
		if(check(a)==1) printf("YES\n");
		else printf("NO\n");
	}
}
