#include<stdio.h>
#include<string.h>

int main(){
	char s[100];
	scanf("%s", s);
	char tmp=s[0];
	s[0]=s[strlen(s)-1];
	s[strlen(s)-1]=tmp;
	if(s[0]=='0'){
		for(int i=1; i<strlen(s); i++){
			printf("%c", s[i]);
		}
	}
	else{
		for(int i=0; i<strlen(s); i++){
			printf("%c", s[i]);
		}
	}
}
