#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

void update(int *a,int *b) {
    
    int x=0, y=0;
    x=abs(*a-*b);
    y=*a+*b;
    *a=y;
    *b=x;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

