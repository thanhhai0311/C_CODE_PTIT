#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(b!=0){
		printf("%d %d %d %.2f %d", a+b, a-b, a*b, (double)a/b, a%b);
	}
	else printf("0");
}
