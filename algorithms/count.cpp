//C++ Algorithm count()function accepts 'val' as argument and 
//compares for the occurrence of element 'val' in the range. 
//The number of occurrence of that element is returned.

#include<iostream>
#include<vector>
#include<array>
#include<algorithm>

int main() {
  std::vector<int> vec = {1, 2, 33, 4, 4, 5, 6, 6, 4};
  std::cout << std::count(vec.begin(), vec.end(), 4);
  return 0;
}