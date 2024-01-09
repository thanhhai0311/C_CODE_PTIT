#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[1000], b[1000];
		scanf("%s%s", a, b);
		if((strlen(a)<strlen(b)) || (strlen(a)==strlen(b) && strcmp(a, b)<0)){
			char c[1000];
			strcpy(c, a);
			strcpy(a, b);
			strcpy(b, c);
		}
		int na=strlen(a);
		int nb=strlen(b);
		int a1[na], b1[na], res[na];
		int n=0;
		for(int i=0; i<na; i++){
			a1[na-i-1]=a[i]-'0';
		}
		for(int i=0; i<nb; i++){
			b1[nb-i-1]=b[i]-'0';
		}
		for(int i=nb; i<na; i++){
			b1[i]=0;
		}
		int nho=0;
		for(int i=0; i<na; i++){
			int tmp=a1[i]-b1[i]-nho;
			if(tmp<0){
				res[n++]=10+tmp;
				nho=1;
			}
			else{
				res[n++]=tmp;
				nho=0;
			}
		}
		int i=n-1;
		while(res[i]==0){
			i--;
		}
		if(i<0) printf("0\n");
		else{
			for(int j=i; j>=0; j--){
				printf("%d", res[j]);
			}
		}
		printf("\n");
	}
}
