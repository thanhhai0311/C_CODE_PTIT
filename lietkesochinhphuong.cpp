//#include<stdio.h>
//#include<math.h>
//
//int main(){
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int l=sqrt(n), r=sqrt(m);
//	if(l*l==n) l--;
//	for(int i=l+1; i<=r; i++){
//		printf("%d\n", i*i);
//	}
//}

#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int e[100000]={},c=sqrt(a),d=sqrt(b),k=0;
	if(c*c!=a) c++;
	for(int i=c;i<=d;i++){
		e[k]=i*i;
		k++;
	}
	printf("%d\n",k);
	for(int i=0;i<k;i++){
		printf("%d\n",e[i]);
	}
}
