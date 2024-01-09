#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct SinhVien{
	int ma;
	char ten[100];
	float diem1, diem2, diem3;
};

typedef struct SinhVien SV;

SV ds[1000];
int cnt=0;

void ham1(){
	int n;
	scanf("%d", &n);
	printf("%d\n", n);
	for(int i=cnt; i<cnt+n; i++){
		ds[i].ma=i+1;
		getchar();
		gets(ds[i].ten);
		scanf("%f%f%f", &ds[i].diem1, &ds[i].diem2, &ds[i].diem3);
	}
	cnt+=n;
}

void ham2(){
	int n;
	scanf("%d", &n);
	getchar();
	printf("%d\n", n);
	gets(ds[n-1].ten);
	scanf("%f%f%f", &ds[n-1].diem1, &ds[n-1].diem2, &ds[n-1].diem3);
}

float tong(SV a){
	return a.diem1+a.diem2+a.diem3;
}

int cmp(const void *a, const void *b){
	SV *x = (SV*)a;
	SV *y = (SV*)b;
//	if(tong(*x)!=tong(*y)){
//		if(tong(*x)<tong(*y)) return -1;
//		else return 1;
//	}
	return x->ma - y->ma;
}

void ham3(){
	qsort(ds, cnt, sizeof(SV), cmp);
	for(int i=0; i<cnt; i++){
		if(ds[i].diem1<ds[i].diem2 && ds[i].diem2<ds[i].diem3)
		printf("%d %s %.1f %.1f %.1f\n", ds[i].ma, ds[i].ten, ds[i].diem1, ds[i].diem2, ds[i].diem3);	
	}
}

int main(){
	int t;
	while(1){
		scanf("%d", &t);
		switch(t){
			case 1:
				ham1();
				break;
			case 2:
				ham2();
				break;
			case 3:
				ham3();
				break;
		}
		if(t==3) break;
	}
}
