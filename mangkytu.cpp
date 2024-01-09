#include<stdio.h>
#include<string.h>

int main(){
	char a[1000];
	scanf("%s", a);
	int dem=0;
	for(int i=0; i<strlen(a); i++){
		if(a[i]=='(' || a[i]=='[' || a[i]=='{' || a[i]=='"') dem++;
		if(a[i]==')' || a[i]==']' || a[i]=='}' || a[i]=='"') dem--;
	}
	if(dem!=0) printf("0");
	else printf("1");
}
