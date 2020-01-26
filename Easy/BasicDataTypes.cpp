#include <iostream>
#include <cstdio>
#include <sstream>
using namespace std;

int main() {
    string buff;
    getline(cin, buff);
    stringstream ss(buff);
    while(ss>>buff)
    {
        cout << buff;
        if(ss.good()) cout << endl;
    }
    

    return 0;
}