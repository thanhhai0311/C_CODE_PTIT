#include<stdio.h>
#include<math.h>

int check1(int n){
	int res=0;
	int a=n;
	while(n!=0){
		int tmp=n%10;
		res=res*10+tmp;
		n/=10;
	}
	if(res==a) return 1;
	return 0;
}

int check2(int n){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	if(sum%10==0) return 1;
	return 0;
}

int check3(int n){
	while(n!=0){
		if(n%10==4){
			return 0;
		}
		n/=10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int l=pow(10, n-1);
		int r=pow(10, n);
		int dem=0;
		for(int i=l; i<r; i++){
			if(check1(i)==1 && check2(i)==1 && check3(i)==1){
				printf("%d ", i);
			}
		}
		printf("\n");
	}
}
