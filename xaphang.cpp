#include<stdio.h>
#include<string.h>

int main(){
	long long n, i, j, a;
	scanf("%lld", &n);
	long long arr[n+5][2];
	for(i=0; i<n; i++){
		for(j=0; j<2; j++){
			scanf("%lld", &arr[i][j]);
		}
	}
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(arr[i][0]>arr[j][0]){
				a=arr[i][0];
				arr[i][0]=arr[j][0];
				arr[j][0]=a;
				a=arr[i][1];
				arr[i][1]=arr[j][1];
				arr[j][1]=a;
			}
		}
	}
	long long time=0;
	for(i=0; i<n; i++){
		if(arr[i][0]>time){
			time=arr[i][0]+arr[i][1];
		}else{
			time=time+arr[i][1];
		}
	}
	printf("%lld",time);
}


