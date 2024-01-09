#include<stdio.h>
#include<string.h>

int sum(char a[]){
	int sum=0;
	for(int i=0; i<strlen(a); i++){
		sum+=a[i]-'0';
	}
	return sum;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[100];
		scanf("%s", a);
		int ok=0;
		if((a[strlen(a)-1]-'0')%2==1 && sum(a)%2==1){
			ok=1;
			for(int i=0; i<=strlen(a)/2; i++){
				if(a[i]!=a[strlen(a)-i-1] || (a[i]-'0')%2==0){
					ok=0;
					break;
				}
			}
		}
		if(ok==1) printf("YES\n");
		else printf("NO\n");
	}
}
