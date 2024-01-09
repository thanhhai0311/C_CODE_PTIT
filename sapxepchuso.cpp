#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[100];
		scanf("%s", a);
		for(int i=0; i<strlen(a)-1; i++){
			for(int j=i+1; j<strlen(a); j++){
				if(a[i]>a[j]){
					char tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
				}
			}
		}
		printf("%lld\n", atoll(a));
	}	
}
