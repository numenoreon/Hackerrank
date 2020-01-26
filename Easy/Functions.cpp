#include <iostream>
#include <cstdio>
#include <array>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d){
    array<int, 4> tab;

    tab[0]=a;tab[1]=b;tab[2]=c;tab[3]=d;
    int max=d;
    for (int i=0; i<tab.size()-1; i++)
    {
        if (tab[i]>max) max=tab[i];
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

