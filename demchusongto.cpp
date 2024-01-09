#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	scanf("%s", a);
	int dem[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	for(int i=0; i<strlen(a); i++){
		if(a[i]-'0'==2) dem[2]++;
		if(a[i]-'0'==3) dem[3]++;
		if(a[i]-'0'==5) dem[5]++;
		if(a[i]-'0'==7) dem[7]++;
	}
	for(int i=0; i<strlen(a); i++){
		if(dem[a[i]-'0']!=0){
			printf("%d %d\n", a[i]-'0', dem[a[i]-'0']);
			dem[a[i]-'0']=0;
		}
	}
}
