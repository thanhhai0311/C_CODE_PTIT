#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a==0 && b==0) printf("Vo so nghiem");
	if(a==0 && b!=0) printf("Vo nghiem");
	if(a!=0 && b!=0){
		printf("%.2f", (float)-b/a);
	}
}
