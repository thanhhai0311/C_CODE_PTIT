#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	scanf("%s", a);
	printf("%c %c", a[0], a[strlen(a)-1]);
}
