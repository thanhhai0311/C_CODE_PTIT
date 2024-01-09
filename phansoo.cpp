#include<stdio.h>

int bcnn(int a, int b){
	int tich=a*b;
	while(b!=0){
		int r=a%b;
		a=b; 
		b=r;
	}
	return tich/a;
}

int ucln(int a, int b){
	while(b!=0){
		int r=a%b;
		a=b; 
		b=r;
	}
	return a;
}

struct PhanSo{
	int tu, mau;
};

typedef struct PhanSo PS;

PS rutgon(PS a){
	int tmp=ucln(a.tu, a.mau);
	a.tu/=tmp;
	a.mau/=tmp;
	return a;
}

void quydong(PS a, PS b){
	a=rutgon(a);
	b=rutgon(b);
	int tmp=bcnn(a.mau, b.mau);
	a.tu=a.tu*(tmp/a.mau);
	a.mau=tmp;
	b.tu=b.tu*(tmp/b.mau);
	b.mau=tmp;	
	printf("%d/%d %d/%d", a.tu, a.mau, b.tu, b.mau);
}

PS tong(PS a, PS b){
	PS c;
	c.tu=a.tu*b.mau+b.tu*a.mau;
	c.mau=a.mau*b.mau;
	c=rutgon(c);
	return c;
}

PS chia(PS a, PS b){
	PS c;
	c.tu=a.tu*b.mau;
	c.mau=a.mau*b.tu;
	c=rutgon(c);
	return c;
}

PS nhap(){
	PS a;
	scanf("%d%d", &a.tu, &a.mau);
	return a;
}

void in(PS a){
	printf("%d/%d", a.tu, a.mau);
}

int main(){
	int t;
	scanf("%d", &t);
	for(int tc=1; tc<=t; tc++){
		PS a=nhap();
		PS b=nhap();
		printf("Case #%d:\n", tc);
		quydong(a, b);
		printf("\n");
		PS c=tong(a, b);
		in(c);
		printf("\n");
		PS d=chia(a, b);
		in(d);
		printf("\n");
	}
}
