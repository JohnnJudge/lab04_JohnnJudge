#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {
 int fiveThrees[5] = {3,3,3,3,3};
 assertEquals(3,maxOfArray(fiveThrees,5),"maxOfArray(fiveThrees,5)");
 int zeros[3] = {0,0,0};
 assertEquals(0,maxOfArray(zeros,3),"maxOfArray(zeros,3)");
 int fiveInts[5] = {1,3,12,4,5};
 assertEquals(12,maxOfArray(fiveInts,5),"maxOfArray(fiveInts,5)");
 assertEquals(3,maxOfArray(fiveInts,2),"maxofArray(fiveInts,2)");
 assertEquals(12,maxOfArray(fiveInts,3),"maxofArray(fiveInts,3)");
 int meaning[] = {42};
 assertEquals(42,maxOfArray(meaning,1),"maxOfArray(meaning,1)");
 int mix[10] = {100,3,9,20,40,89,9,57,98,10};
 assertEquals(100,maxOfArray(mix,10),"maxOfArray(mix,10)");

  return 0;
}
