#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Tu{
	char tu[1000];
	int ts;
};

typedef struct Tu TU;

TU ds[1000];
int n;

int find(char a[]){
	for(int i=0; i<n; i++){
		if(strcmp(a, ds[i].tu)==0){
			return i;
		}
	}
	return -1;
}

int main(){
	char a[1000];
	n=0;
	while(scanf("%s", a)==1){
		int tmp=find(a);
		if(tmp!=-1){
			ds[tmp].ts++;
		}
		else{
			strcpy(ds[n].tu, a);
			ds[n].ts=1;
			n++;
		}
	}
	int max=0;
	for(int i=0; i<n; i++){
		if(strlen(ds[i].tu)>max) max=strlen(ds[i].tu);
	}
	for(int i=0; i<n; i++){
		if(strlen(ds[i].tu)==max){
			printf("%s %d %d\n", ds[i].tu, strlen(ds[i].tu), ds[i].ts);
		}
	}
}
