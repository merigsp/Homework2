#include <iostream>
#include <vector>
#include "complex.h"
#include "sort.h"

int main() {
    std::vector<Complex> complexNumbers;
    
    complexNumbers.emplace_back(3, 4); // 3 + 4i
    complexNumbers.emplace_back(1, 2); // 1 + 2i
    complexNumbers.emplace_back(5, 12); // 5 + 12i
    complexNumbers.emplace_back(0, 1); // 0 + 1i
    complexNumbers.emplace_back(2, 2); // 2 + 2i

 std::cout << "Before sorting:\n";
    for (const auto& c : complexNumbers) {
        std::cout << c << std::endl;
    }

 sortComplexNumbers(complexNumbers);

    std::cout << "\nAfter sorting by absolute value:\n";
    for (const auto& c : complexNumbers) {
        std::cout << c << std::endl;
    }

    return 0;
}
