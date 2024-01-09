#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[100];
		gets(a);
		char tmp[20][50];
		char *token=strtok(a, " ");
		int n=0;
		while(token!=NULL){
			strcpy(tmp[n], token);
			n++;
			token=strtok(NULL, " ");
		}
		for(int i=0; i<n; i++){
			tmp[i][0]=toupper(tmp[i][0]);
			for(int j=1; j<strlen(tmp[i]); j++){
				tmp[i][j]=tolower(tmp[i][j]);
			}
		}
		for(int i=0; i<n; i++){
			printf("%s ", tmp[i]);
		}
		printf("\n");
	}
}
