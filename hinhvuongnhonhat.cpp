#include<stdio.h>

int main(){
		int xA,yA,xB,yB,xC,yC,xD,yD;
		scanf("%d %d %d %d %d %d %d %d",&xA,&yA,&xB,&yB,&xC,&yC,&xD,&yD);
		int maxd=xA,mind=xA,maxr=yA,minr=yA;
		if(xB>maxd) maxd=xB;
		if(xC>maxd) maxd=xC;
		if(xD>maxd) maxd=xD;
		if(xB<mind) mind=xB;
		if(xC<mind) mind=xC;
		if(xD<mind) mind=xD;
		if(yB>maxr) maxr=yB;
		if(yC>maxr) maxr=yC;
		if(yD>maxr) maxr=yD;
		if(yB<minr) minr=yB;
		if(yC<minr) minr=yC;
		if(yD<minr) minr=yD;
		int a=maxd - mind;
		int b=maxr - minr;
		if(a>b) printf("%ld",a*a);
		else printf("%ld",b*b);
	
		
	}
