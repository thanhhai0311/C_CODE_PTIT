#include<stdio.h>

int giaithua(int n){
	long tich=1;
	for(int i=1; i<=n; i++){
		tich*=(long)i;
	}
	return tich;
}

int main(){
	int n;
	scanf("%d", &n);
	int b=n;
	long res=0;
	while(n!=0){
		int tmp=n%10;
		res+=giaithua(tmp);
		n/=10;
	}	
	if(b==res) printf("1");
	else printf("0");
}
