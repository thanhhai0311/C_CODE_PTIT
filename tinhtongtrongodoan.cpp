#include<stdio.h>
#include<math.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%lld", (long long)(a+b)*(abs(b-a)+1)/2);
}
