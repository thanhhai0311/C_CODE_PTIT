#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	char a[100];
	gets(a);
	char *token = strtok(a, " ");
	char b[100][100];
	int n=0;
	while(token!=NULL){
		strcpy(b[n], token);
		n++;
		token = strtok(NULL, " ");
	}	
	int check[n];
	for(int i=0; i<n; i++){
		check[i]=0;
	}
	for(int i=0; i<n; i++){
		if(check[i]==0) printf("%s ", b[i]);
		for(int j=i+1; j<n; j++){
			if(strcmp(b[i], b[j])==0) check[j]=1;
		}
	}
}
