#include <algorithm>
#include <iostream>

using namespace std;

struct List {
    int a, b;
};

int main() {
    int n;
    cin >> n;
    List a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].a;
        cin >> a[i].b;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i].a << " " << a[i].b << "\n";
    }
    // sort(a, a + n);
    
    cout << "After the Sorting " << endl;

    for (int i = 0; i < n; i++) {
        cout << a[i].a << " " << a[i].b << "\n";
    }


}