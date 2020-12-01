#include<iostream>
#include<vector>
#include<array>
#include<algorithm>

int main() {
  int num;
  std::cout << "Enter the number: ";
  std::cin >> num;
  int m = num /2, flag = 0;
  for(int i = 2; i <= m; i++) {
    if(num % i == 0) {
      std::cout << "The number is not a prime number.";
      flag = 1;
      break;
    }
  }
  if(flag == 0) {
      std::cout << "The number is a prime number.";
  }
  return 0;
}