#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

template <class T>
class AddElements
{
    T data;
    public:
    AddElements(T d): data(d) {}

    T add(T d){
        return data+d;
    }

    T concatenate(T d){
        data += d;
        return data;
    }
};
/*Write the class AddElements here*/

int main () {