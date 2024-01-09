//#include<stdio.h>
//
//int main(){
//	int t;
//	scanf("%d", &t);
//	while(t--){
//		int n;
//		scanf("%d", &n);
//		int a[n];
//		for(int i=0; i<n; i++){
//			scanf("%d", &a[i]);
//		}
//		long long res=-1e18, sum=0;
//		for(int i=0; i<n; i++){
//			sum=a[i];
//			if(sum>res) res=sum;
//			for(int j=i+1; j<n; j++){
//				sum+=a[j];
//				if(sum>res) res=sum;
//			}
//		}
//		printf("%lld", res);
//	}
//}

#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		int sum1=0, sum2=0;
		for(int i=0; i<n; i++){
			sum1+=a[i];
			if(sum1>sum2) sum2=sum1;
			else if(sum1<0) sum1=0;
		}
		printf("%d\n", sum2);
	}
}

