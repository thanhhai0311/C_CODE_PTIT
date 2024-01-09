#include<stdio.h>

void nhap(int a[], int n){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
void xuat(int a[], int n){
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}
void dichMang(int a[], int soDich, int n, int store[]){
	int count=0;
	for(int i=n-soDich; i<n; i++){
		store[count++]=a[i];
	}
	for(int i=0; i<n-soDich; i++){
		store[count++]=a[i];
	}
}
int main(){
	int a[100], n, soDich, store[100];
	scanf("%d", &n);
	nhap(a, n);
	scanf("%d", &soDich);
	dichMang(a, soDich, n, store);
	xuat(store, n);
	return 0;
	
}
