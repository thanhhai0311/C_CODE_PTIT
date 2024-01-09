#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int dt[10005], cnt=0;

void solve(char a[]){
	for(int i=0; i<strlen(a); i++){
		if(isdigit(a[i])!=0){
			int tmp=0;
			while(a[i]!='*'){
				tmp=tmp*10+(a[i]-'0');
				i++;
			}
			i+=3;
			int mu=0;
			while(isdigit(a[i])!=0){
				mu=mu*10+(a[i]-'0');
				i++;
			}
			dt[mu]+=tmp;
		}
	}	
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s1[10005], s2[10005];
		gets(s1);
		gets(s2);
		memset(dt, 0, sizeof(dt));
		cnt=0;
		solve(s1);
		solve(s2);
		for(int i=10000; i>=0; i--){
			if(dt[i]!=0) cnt++;
		}
		for(int i=10000; i>=0; i--){
			if(dt[i]!=0){
				printf("%d*x^%d", dt[i], i);
				cnt--;
				if(cnt!=0){
					printf(" + ");
				}
			}
		}
		printf("\n");
	}
}


