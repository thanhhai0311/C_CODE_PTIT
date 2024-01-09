#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void chuyen(char *a){
	int n=strlen(a);
	for(int i=0; i<n; i++){
		if(a[i]>='A' && a[i]<='Z'){
			a[i]+=32;
		}
	}
}

int main(){
	char c[1000];
	gets(c);
	//fgets(s, sizeof(s), stdin);
	chuyen(c);
	char a[20][50];
	int n=0;
	char *token=strtok(c, " ");
	while(token!=NULL){
		strcpy(a[n], token);
		token=strtok(NULL, " ");
		n++;
	}
	int b[n]={};
	for(int i=0; i<n; i++){
		if(b[i]==0){
			int dem=1;
			for(int j=i+1; j<n; j++){
				if(strcmp(a[i], a[j])==0){
					dem++;
					b[j]=1;
				}
			}
			printf("%s %d\n", a[i], dem);
		}
	}
}
