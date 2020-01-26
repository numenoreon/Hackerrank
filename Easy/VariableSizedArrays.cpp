#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int row, col, n, tmp, x, y;
    cin>> row >> col;

    vector < vector <int> > result;
    vector <int> temp;
    for(int j=0; j<row; ++j){
        cin >> n;
        for(int i=0; i<n; ++i){
            cin>>tmp;
            temp.push_back(tmp);
        }
        result.push_back(temp);
        temp={};
    }
    
    for(int i=0; i<col; ++i){
        cin >> x >> y;
        cout << result[x][y] << endl;
    }
    return 0;
}

