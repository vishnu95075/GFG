#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    s.insert(4);
    if (s.find(4) != s.end()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    s.erase(4);
    if (s.find(4) != s.end()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}