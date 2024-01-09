#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct MatHang{
	int ma;
	char ten[100];
	char nhom[100];
	float giamua, giaban;
};

typedef struct MatHang MH;

MH nhap(){
	MH a;
	gets(a.ten);
	gets(a.nhom);
	scanf("%f%f", &a.giamua, &a.giaban);
	return a;
}

void in(MH a){
	printf("%d %s %s %.2f\n", a.ma, a.ten, a.nhom, a.giaban-a.giamua);
}

float loinhuan(MH a){
	return a.giaban-a.giamua;
}

int cmp(const void *a, const void *b){
	MH *x = (MH*)a;
	MH *y = (MH*)b;
	if(loinhuan(*x)>loinhuan(*y)) return -1;
	else return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	MH ds[n];
	for(int i=0; i<n; i++){
		ds[i].ma=i+1;
		getchar();
		gets(ds[i].ten);
		gets(ds[i].nhom);
		scanf("%f%f", &ds[i].giamua, &ds[i].giaban);
	}
	qsort(ds, n, sizeof(MH), cmp);
	for(int i=0; i<n; i++){
		in(ds[i]);
	}
}

//May tinh SONY VAIO
//Dien tu
//16400
//17699
//Tu lanh Side by Side
//Dien lanh
//18300
//25999
//Banh chocopie
//Tieu dung
//27.5
//37
