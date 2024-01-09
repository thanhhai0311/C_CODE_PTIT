#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void reverse(int a[], int n){
	int l=0, r=n-1;
	while(l<r){
		int tmp=a[l];
		a[l]=a[r];
		a[r]=tmp;
		l++, r--;
	}
}


int main(){
	char a[1000];
	scanf("%s", a);
	while(strlen(a)!=1){
		int n=strlen(a);
		int tmp1[n/2], tmp2[n-n/2], res[n-n/2+1];
		int cs=0;
		for(int i=0; i<n; i++){
			if(i<n/2) tmp1[i]=a[i]-'0';
			else tmp2[i-n/2]=a[i]-'0';
		}
		reverse(tmp1, n/2);
		reverse(tmp2, n-n/2);
		for(int i=n/2; i<=n-n/2; i++){
			tmp1[i]=0;
		}
//		for(int i=0; i<n/2; i++){
//			printf("%d ", tmp1[i]);
//		}
		int nho=0;
		for(int i=0; i<n-n/2; i++){
			int tmp=tmp1[i]+tmp2[i]+nho;
			res[cs++]=tmp%10;
			nho=tmp/10;
		}
		if(nho>0) res[cs++]=nho;
		//printf("%d ", cs);
//		for(int i=cs-1; i>=0; i--){
//			printf("%d ", res[i]);
//		}
		char s[cs+1];
		for(int i=cs-1; i>=0; i--){
			s[cs-i-1]=res[i]+'0';
		}
		s[cs]='\0';
		printf("%s\n", s);
		strcpy(a, s);
	}
}
