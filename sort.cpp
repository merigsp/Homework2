#include "sort.h"

void sortComplexNumbers(std::vector<Complex>& complexNumbers) {
    size_t n = complexNumbers.size();
    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = 0; j < n - i - 1; ++j) {
            if (complexNumbers[j].absolute() > complexNumbers[j + 
1].absolute()) {
                std::swap(complexNumbers[j], complexNumbers[j + 1]);
            }
        }
    }
}
