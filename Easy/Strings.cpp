#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string raz, dwa;
    cin >> raz;
    cin >> dwa;

    cout << raz.length() << " " << dwa.length() << endl;
    cout << raz + dwa << endl;
    char temp = raz[0];
    raz[0]=dwa[0];
    dwa[0]=temp;
    cout << raz << " " << dwa << endl;

    return 0;
}

