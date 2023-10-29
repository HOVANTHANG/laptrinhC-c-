#include <iostream>

int calculateMinimumClones(int targetClones) {
    int totalClones = 1;  // Ban ð?u có 1 b?n sao (chính Koi)

    int phanThanCount = 0;  // S? l?n phân thân

    while (totalClones < targetClones) {
        totalClones += totalClones;  
        phanThanCount++;
    }

    return phanThanCount;
}

int main() {
    int targetClones;

  
    std::cin >> targetClones;

    int minPhanThan = calculateMinimumClones(targetClones);

    std::cout << minPhanThan << std::endl;

    return 0;
}

