#include<stdio.h>

int main(){
    long n;
    long MinU=50005;
    long MinD=50005;
    long U, D;
    long TU=0, TD=0;
    scanf("%ld", &n);
    for(long i=1; i<=n; i++){ 
		scanf("%ld%ld", &U, &D); 
	 	TU+=U; 
		TD+=D; 
		if(MinU>U) MinU=U;
        if(MinD>D) MinD=D;
    }
    TU+=MinD;
    TD+=MinU;
    if(TU>TD) printf("%ld",TU);
    else printf("%ld",TD);
 
   
}
