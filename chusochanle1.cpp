#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	scanf("%s", a);
	int demchan=0;
	int demle=0;
	for(int i=0; i<strlen(a); i++){
		if((a[i]-'0') % 2==0) demchan++;
		else demle++;
	}
	printf("%d %d", demle, demchan);
}
