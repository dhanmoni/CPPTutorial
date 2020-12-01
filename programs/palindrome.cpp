#include<iostream>
#include<vector>
#include<array>
#include<algorithm>

int main() {
  int num, temp, rem, rev = 0;
  std::cout << "Enter the number: ";
  std::cin >> num;
  temp = num;
  while(temp > 0){
    rem = temp % 10;
    rev = (rev * 10) + rem;
    temp /= 10;
  }
  if(rev == num) {
    std::cout << "The number is a palindrome!";
  } else {
    std::cout << "The number is not a palindrome!";
  }
  return 0;
}