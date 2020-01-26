#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {

	stringstream ss(str);
    int x=0;
    char ch;
    vector <int> data;
    while(ss>>x)
    {
        data.push_back(x);
        ss>>ch;
    }   
    return data;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

