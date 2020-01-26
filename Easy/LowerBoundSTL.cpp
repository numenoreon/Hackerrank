#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,x;
    cin >> n;

    vector <int> data;

    for(int i=0; i<n; i++)
    {
        cin >> x;
        data.push_back(x);
    }

    cin >> n;
    string wynik;

    for(int i=0; i<n; i++)
    {
        cin >> x;
        if (find(begin(data),end(data),x)==data.end()) {wynik="No";}
        else { wynik="Yes";}
        auto low=lower_bound (data.begin(), data.end(), x);
        cout << wynik << " " << distance(data.begin(), low)+1 << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
