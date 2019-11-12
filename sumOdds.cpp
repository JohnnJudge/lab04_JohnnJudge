//Author: John Judge
//Date: 11/5/19
//sums the odd numbers in an array
#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"
bool isOdd(int);
int sumOdds(int a[], int size) {
  int sum = 0;
  for(int i = 0; i < size; i++){
	if(isOdd(a[i])){
		sum += a[i];
	}
  }
  return sum;
}
