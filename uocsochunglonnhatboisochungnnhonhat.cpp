#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	long long tich=(long long)a*b;
	int ucln; 
	long long bcnn;
	while(b!=0){
		int r=a%b;
		a=b;
		b=r; 
	}
	ucln=a;
	//printf("%d", tich);
	bcnn=(long long)tich/ucln;
	printf("%d\n%lld", ucln, bcnn);
}
