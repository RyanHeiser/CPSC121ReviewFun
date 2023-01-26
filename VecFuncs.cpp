#include "VecFuncs.h"

void fillVector(vector<int> &vec) {

  int num;

  for (int i = 0; i < 5; i++) {
    cout << "Enter an integer: ";
    cin >> num;
    vec.push_back(num);
  }
}

void findMinMax(vector<int> nums, int& min, int& max) {
  min = nums.at(0);
  max = nums.at(0);

  for (int num : nums) {
    if (num < min) {
      min = num;
    }
    if (num > max) {
      max = num;
    }
  }
}
