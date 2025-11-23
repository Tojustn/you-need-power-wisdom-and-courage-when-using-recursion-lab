#include "trianglenumbercalculator.hpp"
#include <vector>

int getTriangleNumber(int n){
   if(n==0){
      return 0; 
   }

   return getTriangleNumber(n-1) + n;
}

int TriangleNumberCalculator::value(int n){
   return getTriangleNumber(n);
}

int TriangleNumberCalculator::add(int n, int m){
   return getTriangleNumber(n) + getTriangleNumber(m);
}

int TriangleNumberCalculator::subtract(int n, int m){
   return getTriangleNumber(n) - getTriangleNumber(m);
}

int TriangleNumberCalculator::multiply(int n, int m){
   return getTriangleNumber(n) * getTriangleNumber(m);
}

double TriangleNumberCalculator::divide(int n, int m){
   return static_cast<double>(getTriangleNumber(n)) / getTriangleNumber(m);
}

std::vector<int> TriangleNumberCalculator::sequence(int n){
   std::vector<int> result;
   for(int i = 1; i <= n; i++){
      result.push_back(getTriangleNumber(i));
   }
   return result;
}

