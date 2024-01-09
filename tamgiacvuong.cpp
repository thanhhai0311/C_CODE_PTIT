#include <stdio.h>
#include <math.h>
#include <string.h>
#define mod 1e-9
#define elif else if
#define yes printf("YES\n");
#define no printf("NO\n");
#define cint int t;scanf("%d",&t);while (t--)
typedef long long ll;
typedef double db;
typedef unsigned long long uln;

void swap(long long *a, long long *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


void sapxep(long long arr[], long long n){
	int i, j;
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(arr[i]>arr[j]) swap(&arr[i], &arr[j]);
		}
	}
}



int main(){
	cint{
		long long n, a, i, j, kt=0;
		scanf("%lld", &n);
		long long arr[n+5];
		for(i=0;i<n;i++){
			scanf("%lld",&a);
			arr[i]=a*a;
		}
		sapxep(arr, n);
		long long b,c;
		a=0, b=n-2, c=n-1;
		while(b>0){
			if(arr[a]+arr[b]<arr[c]) a++;
			else if(arr[a]+arr[b]>arr[c]) b--;
			else{
				kt=1;
				break;
			}
			if(a==b){
				c--;
				a=0;
				b=c-1;
			}
		}
		if(kt==1) yes
		else no
	}
}
