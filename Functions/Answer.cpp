#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d){
    int s = 0;
    if(a>b && a>c && a>d){
        s += a;
    }
    if(b>a && b>c && b>d){
        s+= b;
    }
    if(c>a && c>b && c>d){
        s+= c;
    }
    if(d>a && d>b && d>c){
        s+= d;
    }
    return s;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
