//C++ Algorithm copy() function is used to copy all the elements of 
//the container [first,last] into a different container starting from result.

#include <algorithm>
#include <iostream>
#include <vector>
#include <array>

int main() {
  std::array<int, 5> newArr = {10, 20, 30, 40, 50};
  std::vector<int> vec(5);
  std::copy(newArr.begin(), newArr.end(), vec.begin());

  for(std::vector<int>::const_iterator it = vec.begin(); it !=vec.end(); ++it) {
    std::cout << "vec = " << *it << " ";
  }
  std::cout << std::endl;
  for(std::array<int, 5>::const_iterator it = newArr.begin(); it !=newArr.end(); ++it) {
    std::cout << "arr = " << *it << " ";
  }
  return 0;
}