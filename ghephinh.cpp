#include<stdio.h>

int main(){
        int a,b,m,n,x,y;
        scanf("%d%d%d%d%d%d",&a,&b,&m,&n,&x,&y);
        if(m+x==a && b+n==a && y+b==a) printf("YES");
        else if(a+x==m && b+n==m && y+n==m) printf("YES");
        else if(a+m==x && b+y==x && n+y==x) printf("YES");
        else if(b==n && n==y && a+m+x==b) printf("YES");
        else if(a+x==y && m+x==y && b+n==y ) printf("YES");
        else if(x+a==b && m+a==b && y+n==b) printf("YES");
        else if(x+m==n && a+m==n && y+b==n) printf("YES");
        else if(a==x && m==x && b+y+n==a) printf("YES");
        else if(m+x==b && a+n==b && y+a==b) printf("YES");
        else if(b+x==m && a+n==m && y+n==m) printf("YES");
        else if(b+m==x && a+y==x && n+y==x) printf("YES");
        else if(a==n && n==y && b+m+x==a) printf("YES");
        else if(b+x==y && m+x==y && a+n==y ) printf("YES");
        else if(x+b==a && m+b==a && y+n==a) printf("YES");
        else if(x+m==n && b+m==n && y+a==n) printf("YES");
        else if(b==x && m==x && a+y+n==b) printf("YES");
        else if(n+x==a && b+m==a && y+b==a) printf("YES");
        else if(a+x==n && b+m==n && y+m==n) printf("YES");
        else if(a+n==x && b+y==x && m+y==x) printf("YES");
        else if(b==m && m==y && a+n+x==b) printf("YES");
        else if(a+x==y && n+x==y && b+m==y ) printf("YES");
        else if(x+a==b && n+a==b && y+m==b) printf("YES");
        else if(x+n==m && a+n==m && y+b==m) printf("YES");
        else if(a==x && n==x && b+y+m==a) printf("YES");
        else if(m+y==a && b+n==a && x+b==a) printf("YES");
        else if(a+y==m && b+n==m && x+n==m) printf("YES");
        else if(a+m==y && b+x==y && n+x==y) printf("YES");
        else if(b==n && n==x && a+m+y==b) printf("YES");
        else if(a+y==x && m+y==x && b+n==x ) printf("YES");
        else if(y+a==b && m+a==b && x+n==b) printf("YES");
        else if(y+m==n && a+m==n && x+b==n) printf("YES");
        else if(a==y && m==y && b+x+n==a) printf("YES");
        else printf("NO");
}
