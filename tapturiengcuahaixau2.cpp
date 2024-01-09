#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int cmp(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	return strcmp(x, y);
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s1[1000];
		char s2[1000];
		gets(s1);
		gets(s2);
		char a1[100][100];
		int n1=0;
		char a2[100][100];
		int n2=0;
		char *token1=strtok(s1, " ");
	while(token1!=NULL){
		strcpy(a1[n1], token1);
		n1++;
		token1=strtok(NULL, " ");
	}
	char *token2=strtok(s2, " ");
	while(token2!=NULL){
		strcpy(a2[n2], token2);
		n2++;
		token2=strtok(NULL, " ");
	}
	int cnt[1000]={};
	qsort(a1, n1, sizeof(a1[0]), cmp);
	for(int i=0; i<n1; i++){
		if(cnt[i]==0){
			int ok=1;
			for(int j=0; j<n2; j++){
				if(strcmp(a1[i], a2[j])==0){
					ok=0;
					for(int k=i+1; k<n1; k++){
						if(strcmp(a1[i], a1[k])==0) cnt[k]=1;
					}
					break;
				}
			}
			if(ok==1){	
				for(int k=i+1; k<n1; k++){
					if(strcmp(a1[i], a1[k])==0) cnt[k]=1;
				}
				printf("%s ", a1[i]);
			}
		}
	}
	printf("\n");}
}
