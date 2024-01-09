#include<stdio.h>

void check(long a[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                printf("%ld\n", a[i]);
                return;
            }
        }
    }
    printf("NO\n");
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){  
		int n;
    	scanf("%d",&n);
     	long a[n];
     	for(int i=0;i<n;i++){
        	scanf("%ld",&a[i]);
     	}
     	check(a,n);
    }
}
