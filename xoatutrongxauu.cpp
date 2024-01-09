#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void chuyen(char *a){
	for(int i=0; i<strlen(a); i++){
		a[i]=tolower(a[i]);
	}
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	for(int tc=1; tc<=t; tc++){
		char a[1000];
		char b[1000];
		gets(a);
		gets(b);
		char tmp[100][100];
		char res[100][100];
		int n=0;
		char *token=strtok(a, " ");
		while(token!=NULL){
			strcpy(tmp[n], token);
			strcpy(res[n], tmp[n]);
			n++;
			token=strtok(NULL, " ");
		}
		chuyen(b);
		printf("Test %d: ", tc);
		for(int i=0; i<n; i++){
			chuyen(tmp[i]);
			if(strcmp(tmp[i], b)!=0){
				printf("%s ", res[i]);
			}
		}
		printf("\n");
	}
}
