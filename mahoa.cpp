#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[100];
		scanf("%s", a);
		int dem=1;
		for(int i=0; i<strlen(a); i++){
			if(a[i]==a[i+1]) dem++;
			else{
				printf("%c%d", a[i], dem);
				dem=1;
			}
		}
		printf("\n");
	}
}
