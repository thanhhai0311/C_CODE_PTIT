#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int dem=0;
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0 && i%2==0) dem++;
			if(n%i==0 && (n/i)%2==0) dem++;
			if(i*i==n && i%2==0) dem--;
		}
		if(n%2==0) dem++;
		printf("%d\n", dem);
	}
}
