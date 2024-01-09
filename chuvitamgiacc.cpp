#include<stdio.h>
#include<math.h>

struct Diem{
	int x, y;
};
typedef struct Diem diem;

struct TamGiac{
	diem a, b, c;
};

typedef struct TamGiac TG;

int check(TG tmp){
	float ab=sqrt((tmp.a.x-tmp.b.x)*(tmp.a.x-tmp.b.x)+(tmp.a.y-tmp.b.y)*(tmp.a.y-tmp.b.y));
	float ac=sqrt((tmp.a.x-tmp.c.x)*(tmp.a.x-tmp.c.x)+(tmp.a.y-tmp.c.y)*(tmp.a.y-tmp.c.y));
	float bc=sqrt((tmp.b.x-tmp.c.x)*(tmp.b.x-tmp.c.x)+(tmp.b.y-tmp.c.y)*(tmp.b.y-tmp.c.y));
	if(ab>0 && ac>0 && bc>0 && ab+ac>bc && ab+bc>ac && ac+bc>ab) return 1;
	else return 0;
}

float chuvi(TG tmp){
	float ab=sqrt((tmp.a.x-tmp.b.x)*(tmp.a.x-tmp.b.x)+(tmp.a.y-tmp.b.y)*(tmp.a.y-tmp.b.y));
	float ac=sqrt((tmp.a.x-tmp.c.x)*(tmp.a.x-tmp.c.x)+(tmp.a.y-tmp.c.y)*(tmp.a.y-tmp.c.y));
	float bc=sqrt((tmp.b.x-tmp.c.x)*(tmp.b.x-tmp.c.x)+(tmp.b.y-tmp.c.y)*(tmp.b.y-tmp.c.y));
	return ab+ac+bc;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		TG tmp;
		scanf("%d%d%d%d%d%d", &tmp.a.x, &tmp.a.y, &tmp.b.x, &tmp.b.y, &tmp.c.x, &tmp.c.y);
		if(check(tmp)==1){
			printf("%.3f\n", chuvi(tmp));
		}
		else{
			printf("INVALID\n");
		}
	}
}
