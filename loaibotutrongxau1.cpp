#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	char s[100];
	char a[100];
	gets(s);
	gets(a);
	char b[100][100];
	int n=0;
	char *token = strtok(s, " ");
	while(token!=NULL){
		strcpy(b[n], token);
		n++;
		token = strtok(NULL, " ");
	}
	for(int i=0; i<n; i++){
		if(strcmp(b[i], a)!=0) printf("%s ", b[i]);
	}
}
