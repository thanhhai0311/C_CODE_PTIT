#include<stdio.h>
#include<math.h>
#include<string.h>

int nto(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	char a[100];
	scanf("%s", a);
	int cnt[10]={};
	for(int i=0; i<strlen(a); i++){
		cnt[a[i]-'0']++;
	}	
	for(int i=0; i<strlen(a); i++){
		if(nto(a[i]-'0')==1 && cnt[a[i]-'0']>=1){
			printf("%c %d\n", a[i], cnt[a[i]-'0']);
			cnt[a[i]-'0']=0;
		}
	}
}
