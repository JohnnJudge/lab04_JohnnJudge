//Author: John Judge
//Date: 11/5/19
//tests the error in max of array when passing in an empty array
#include "arrayFuncs.h"
#include "tddFuncs.h"
int main() {
  int empty[] = {};
  assertEquals(0, maxOfArray(empty, 0), "maxOfArray(empty,0)");
  return 0;

}
