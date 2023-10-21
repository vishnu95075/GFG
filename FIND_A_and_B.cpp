#include <iostream>

std::pair<int, int> findPair(int x, int y, int z) {
    if (x != y && x % y == 0) {
        return std::make_pair(x, y);
    }
    if (x != z && x % z == 0) {
        return std::make_pair(x, z);
    }
    if (y != x && y % x == 0) {
        return std::make_pair(y, x);
    }
    if (y != z && y % z == 0) {
        return std::make_pair(y, z);
    }
    if (z != x && z % x == 0) {
        return std::make_pair(z, x);
    }
    if (z != y && z % y == 0) {
        return std::make_pair(z, y);
    }
    return std::make_pair(-1, -1);
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int x, y, z;
        std::cin >> x >> y >> z;

        std::pair<int, int> result = findPair(x, y, z);

        std::cout << result.first << " " << result.second << std::endl;
    }

    return 0;
}
