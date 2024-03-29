//Author: John Judge
//Date: 11/5/19
//returns the sum of the even numbers in an array
#include "arrayFuncs.h"

#include <cstdlib>

#include <iostream>

#include"utility.h"

bool isEven(int);
int countEvens(int a[], int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (isEven(a[i])) {
      count++;
    }
  }
  return count;
}
