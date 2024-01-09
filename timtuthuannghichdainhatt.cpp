#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

struct Tu{
	char s[100];
	int ts;	
};

typedef struct Tu tu;

int tn(char a[]){
	for(int i=0; i<=strlen(a)/2; i++){
		if(a[i]!=a[strlen(a)-i-1]) return 0;
	}
	return 1;
}

tu tmp[1000];
int n=0;

int find(char a[]){
	for(int i=0; i<n; i++){
		if(strcmp(a, tmp[i].s)==0) return i;
	}
	return -1;
}

int main(){
	char a[100];
	while(scanf("%s", a)!=-1){
		if(tn(a)==1){
			int pos=find(a);
			if(pos!=-1){
				tmp[pos].ts++;
			}
			else{
				strcpy(tmp[n].s, a);
				tmp[n].ts=1;
				n++;
			}
		}
	}
	int max=0;
	for(int i=0; i<n; i++){
		if(strlen(tmp[i].s)>max){
			max=strlen(tmp[i].s);
		}
	}
	for(int i=0; i<n; i++){
		if(strlen(tmp[i].s)==max){
			printf("%s %d\n", tmp[i].s, tmp[i].ts);
		}
	}
}
