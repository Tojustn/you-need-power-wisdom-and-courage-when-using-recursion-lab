#include <iostream>
#include "src/trianglenumbercalculator.hpp"
#include <vector>

int main() {
  TriangleNumberCalculator calc = TriangleNumberCalculator();

  int n = 4;
  int m = 3;

  std::cout << "Testing triangle number calculator with n=" << n << " and m=" << m << std::endl;
  std::cout << "Value of " << n << ":\t" << calc.value(n) << std::endl;
  std::cout << "Value of " << m << ":\t" << calc.value(m) << std::endl;
  
  std::cout << "\nAdd " << n << " and " << m << ":\t" << calc.add(n, m) << std::endl;
  std::cout << "Subtract " << n << " and " << m << ":\t" << calc.subtract(n, m) << std::endl;
  std::cout << "Multiply " << n << " and " << m << ":\t" << calc.multiply(n, m) << std::endl;
  std::cout << "Divide " << n << " by " << m << ":\t" << calc.divide(n, m) << std::endl;
  
  std::cout << "\nSequence up to " << n << ": ";
  std::vector<int> seq = calc.sequence(n);
  for (size_t i = 0; i < seq.size(); i++) {
    std::cout << seq[i];
    if (i < seq.size() - 1) {
      std::cout << ", ";
    }
  }
  std::cout << std::endl;

}
