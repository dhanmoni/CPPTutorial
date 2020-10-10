#include<iostream>
#include<vector>
#include<array>
#include<algorithm>

int main() {
  std::vector<int> vec = {1, 2, 3, 4, -2, 0, -33, 20, 30, 34, 49};
  
 std::cout <<  std::count_if(vec.begin(), vec.end(), [](int k){return k % 2 != 0;});

  return 0;
}