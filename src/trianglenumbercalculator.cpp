#include "trianglenumbercalculator.hpp"

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

