#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
int a,b;

cin >> a >> b;

for (int n=a; n<b+1; n++)
{
    if (n==0) cout << "zero";
    if (n==1) cout << "one";
    if (n==2) cout << "two";
    if (n==3) cout << "three";
    if (n==4) cout << "four";
    if (n==5) cout << "five";
    if (n==6) cout << "six";
    if (n==7) cout << "seven";
    if (n==8) cout << "eight";
    if (n==9) cout << "nine";
    if (n>9 && n%2==0) cout << "even";
    if (n>9 && n%2==1) cout << "odd";

    cout << endl;
}
    return 0;
}

