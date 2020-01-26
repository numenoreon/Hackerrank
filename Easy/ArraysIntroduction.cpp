#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int sz, bf;
    cin >> sz;
    vector <int> tab;

    for (int i=0; i<sz;i++) 
    {
        cin >> bf;
        tab.push_back(bf);
    }

    reverse(begin(tab), end(tab));
    
    for (int i=0; i<sz;i++) 
    {
        cout << tab[i] << " ";
    }

    return 0;
}
