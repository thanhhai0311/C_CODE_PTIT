#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	char a[100];
	gets(a);
	char tmp[20][50];
	int n=0;
	char *token = strtok(a, " ");
	while(token!=NULL){
		strcpy(tmp[n], token);
		n++;
		token=strtok(NULL, " ");
	}
	for(int i=0; i<n-1; i++){
		printf("%c", tolower(tmp[i][0]));
	}
	for(int i=0; i<strlen(tmp[n-1]); i++){
		tmp[n-1][i]=tolower(tmp[n-1][i]);
	}
	printf("%s@ptit.edu.vn", tmp[n-1]);
}
