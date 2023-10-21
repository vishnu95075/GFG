#include <algorithm>
#include <iostream>
#include <vector>

int minBoxesWithMBalls(int N, int M, std::vector<int>& colors) {
    std::sort(colors.begin(), colors.end(), std::greater<int>());
    int minBoxes = 0;
    int count = 0;
    for (int i = 0; i < M; i++) {
        count += colors[i];
        if (count >= M) {
            minBoxes++;
            count = 0;
        }
    }
    if (minBoxes == 1)
        return 0;
    else
        return minBoxes;
}

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int N, M;
        std::cin >> N >> M;
        std::vector<int> colors(M);
        for (int i = 0; i < M; i++) {
            std::cin >> colors[i];
        }

        int minBoxes = minBoxesWithMBalls(N, M, colors);
        std::cout << minBoxes << std::endl;
    }

    return 0;
}
