//Author: John Judge
//Date: 11/5/19
//returns the number of prime numbers in an array
#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>
#include "utility.h"
bool isPrime(int);
int countPrimes(int a[], int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (isPrime(a[i])) {
      count++;
    }
  }
  return count;
}
