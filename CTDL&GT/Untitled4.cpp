#include <iostream>

int calculateMinimumClones(int targetClones) {
    int totalClones = 1;  // Ban �?u c� 1 b?n sao (ch�nh Koi)

    int phanThanCount = 0;  // S? l?n ph�n th�n

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

