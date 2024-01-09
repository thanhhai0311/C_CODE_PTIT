#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	char a[100000];
	int dem=0;
	if(n==0) printf("0");
	while(n!=0){
		a[dem++]=(n%2)+'0';
		n/=2;
	}
	for(int i=dem-1; i>=0; i--){
		printf("%c", a[i]);
	}
}
