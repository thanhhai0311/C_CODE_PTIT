#include<stdio.h>
#include<stdlib.h>

struct ThiSinh{
	int ma;
	char ten[100];
	char ns[100];
	float diem1, diem2, diem3;
};

typedef struct ThiSinh TS;
	
void in(TS a){
	printf("%d %s %s %.1f", a.ma, a.ten, a.ns, a.diem1+a.diem2+a.diem3);
}

float tong(TS a){
	return a.diem1+a.diem2+a.diem3;
}

int cmp(const void *a, const void *b){
	TS *x = (TS*)a;
	TS *y = (TS*)b;
	if(tong(*x)!=tong(*y)){
		if(tong(*x)>tong(*y)) return -1;
		else return 1;
	}
	else{
		return x->ma-y->ma;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	TS ds[n];
	for(int i=0; i<n; i++){
		ds[i].ma=i+1;
		getchar();
		gets(ds[i].ten);
		gets(ds[i].ns);
		scanf("%f%f%f", &ds[i].diem1, &ds[i].diem2, &ds[i].diem3);
	}
	qsort(ds, n, sizeof(TS), cmp);
	float tmp=tong(ds[0]);
	for(int i=0; i<n; i++){
		if(tong(ds[i])==tmp){
			in(ds[i]);
			printf("\n");
		}
	}
}
