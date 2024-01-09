#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[100];
		scanf("%s", a);
		if(a[0]==a[strlen(a)-1]) printf("YES\n");
		else printf("NO\n");
	}
}
