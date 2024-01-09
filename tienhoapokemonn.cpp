#include<stdio.h>

struct Pokemon{
	char ten[100];
	int k, m;
	int solantienhoa;
};

typedef struct Pokemon PK;

PK nhap(){
	PK a;
	gets(a.ten);
	scanf("%d%d", &a.k,&a.m);
	return a;
}

int tienhoa(PK a){
	int dem=0;
	while(a.m>=a.k){
		dem++;
		a.m=a.m-a.k+2;
	}
	return dem;
}

int main(){
	int n;
	scanf("%d", &n);
	PK ds[n];
	for(int i=0; i<n; i++){
		getchar();
		gets(ds[i].ten);
		scanf("%d%d", &ds[i].k, &ds[i].m);
		ds[i].solantienhoa=tienhoa(ds[i]);
	}
	int tong=0, max=-1, pos;
	for(int i=0; i<n; i++){
		tong+=ds[i].solantienhoa;
		if(ds[i].solantienhoa>max){
			max=ds[i].solantienhoa;
			pos=i;
		}
	}
	printf("%d\n%s", tong, ds[pos].ten);
}


