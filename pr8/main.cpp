#include "solution.h"
#include "profile.h"
#include <iostream>

using namespace std;

int main() {
    const size_t n = 50'000'000; // Size of the array
    const size_t k = 50'000'000; // Number of elements to sum
    vector<double> a(n);

    // Fill the array a with random double values
    for (size_t i = 0; i < n; ++i) {
        a[i] = static_cast<double>(rand()) / RAND_MAX; // Random number between 0 and 1
    }

    {
      LOG_DURATION("50'000'000");
      double result = sumKRandomElements(a, k);
    }

    return 0;
}
