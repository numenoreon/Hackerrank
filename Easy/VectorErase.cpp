#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;


int main() {
    vector <int> data;
    int n,x;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        data.push_back(x);
    }

    cin >> x;

    auto it1 = data.begin()+x-1;
    data.erase(it1);

    cin >> n >> x;
    auto it2=data.begin()+n-1;
    auto it3=data.begin()+x-1;
    data.erase(it2, it3);

    cout << data.size() << endl;
    
    for (int i=0; i<data.size(); i++){
        cout << data[i];
        if(i!=data.size()-1) cout << " ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}