#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	char a[100];
	gets(a);
	int dem1=0, dem2=0, dem3=0;
	for(int i=0; i<strlen(a); i++){
		if(isalpha(a[i])) dem1++;
		else if(isdigit(a[i])) dem2++;
		else dem3++; 
	}
	printf("%d %d %d", dem1, dem2, dem3);
}
