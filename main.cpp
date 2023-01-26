#include "VecFuncs.h"

int main() {

  vector<int> userNums;
  int min;
  int max;

  fillVector(userNums);
  findMinMax(userNums, min, max);

  cout << "Min: " << min << endl;
  cout << "Max: " << max << endl;
}