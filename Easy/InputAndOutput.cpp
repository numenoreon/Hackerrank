#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    string buff;
    getline(cin, buff);
    int x, b=0;
    stringstream ss(buff);
    while(ss>>x)
    {
        b=b+x;
    }

    cout << b;

}
