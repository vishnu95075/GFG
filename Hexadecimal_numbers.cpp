#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int hex(int a) {
    int rem = 0;

    while (a) {
        rem += a % 16;

        a = a / 16;
    }

    return rem;
}

using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {
        int x, y;

        cin >> x >> y;

        int count = 0;

        for (x; x <= y; x++) {
            if (__gcd(x, hex(x)) > 1) {
                count++;
            }
        }

        cout << count << endl;
    }
}#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int hex(int a) {
    int rem = 0;

    while (a) {
        rem += a % 16;

        a = a / 16;
    }

    return rem;
}

using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {
        int x, y;

        cin >> x >> y;

        int count = 0;

        for (x; x <= y; x++) {
            if (__gcd(x, hex(x)) > 1) {
                count++;
            }
        }

        cout << count << endl;
    }
}