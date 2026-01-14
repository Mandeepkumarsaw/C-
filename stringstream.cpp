#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int n = 4;
    string str = "My name is Mandeep Kumar saw";
    stringstream ss(str);
    string word;

    while (ss >> word) {
        if (word.size() > n) {
            cout << word << " ";
        }
    }
    cout << endl;
}