#include <iostream>
#include "src/trianglenumbercalculator.hpp"


int main() {
  TriangleNumberCalculator calc = TriangleNumberCalculator();

  std::cout << "value of 5:\t" << calc.value(5) << std::endl; 


  std::cout << "value of 4:\t" << calc.value(4) << std::endl; 

  std::cout << "add 5 and 4:\t" << calc.add(5,4) << std::endl; 

  std::cout << "subtract 5 and 4:\t" << calc.subtract(5,4) << std::endl; 
}
