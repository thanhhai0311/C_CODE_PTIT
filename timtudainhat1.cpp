#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	char a[1000];
	int max=0;
	char res[100];
	while(scanf("%s", a)==1){
		if(strlen(a)>max){
			strcpy(res, a);
			max=strlen(a);
		}
	}
	printf("%s - %d", res, strlen(res));
}
