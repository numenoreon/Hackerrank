#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string,int>m;
    string s;
    int n; cin >> n;
    int x,y;
    for (int i=0; i<n; i++)
    {
        
    cin >> x;
    switch(x)
    {
        case 1:
        cin >> s; cin >> y;
        m[s] += y;
        break;
        case 2:
        cin >> s;
        m.erase(s);
        break;
        case 3:
        cin >> s;   
        cout << m[s] << endl;
        break;
    }
    }
    return 0;
}



