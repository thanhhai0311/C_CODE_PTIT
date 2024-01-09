#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int t[n], d[n];
	for(int i=0; i<n; i++){
		scanf("%d%d", &t[i], &d[i]);
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(t[i]>t[j]){
				int tmp=t[i];
				t[i]=t[j];
				t[j]=tmp;
				int tmp1=d[i];
				d[i]=d[j];
				d[j]=tmp1;
			}
		}
	}
	int res=t[0]+d[0];
	for(int i=1; i<n; i++){
		if(res>t[i]){
			res+=d[i];
		}
		else if(res<t[i]){
			res=t[i]+d[i];
		}
	}
	printf("%d", res);
}
