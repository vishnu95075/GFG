#include <string.h>

#include <iostream>
using namespace std;

int main() {

    string s = "dog:cat";

    int pos = s.find(":");

    string sub = s.substr(0, pos);

    cout << "String is: " << sub;

    return 0;

}