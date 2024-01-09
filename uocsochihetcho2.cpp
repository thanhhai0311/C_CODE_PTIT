#include<stdio.h>
#include<math.h>
#include<string.h>
 
int main(){
	int n, a, b, t, i, s, dem;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		a=sqrt(n);
		dem=0;
		for(i=2; i<=a; i++){
			if(i*i==n && i%2==0){
				dem++;
				continue;	
			}
			if(n%i==0 && i%2==0){
				dem++;
			}
			if((n/i)%2==0 && n%i==0){
				dem++;
			}
		}
		if(n%2==0){
			dem++;
		}
		printf("%d\n",dem);
	}
}
 


