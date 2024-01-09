#include<stdio.h>

int main(){ 
 	int t;
  	scanf("%d",&t);
    while(t--){
    	long long n;
	 	scanf("%lld", &n);
	  	int kt=1;
	   	int d, k;
	    long long s=0, m=1;
		if(n==0) printf("INVALID\n");
		else{
		    while(n>0){
				d=n%10;
				if(d!=0 && d!=1 && d!=8 && d!=9){
			   		kt=0;
			    	break;
				} 
				else{
				 	if(d==1) k=1; 
				  	else k=0; 
				  	s=s+k*m; 
				  	m=m*10; 
				  	n=n/10; 
				} 
			}
			if(kt!=0){
				if(s!=0) printf("%lld\n", s);
				else printf("INVALID\n");
			} 
			else printf("INVALID\n");
		} 
	}
	return 0;
 }
