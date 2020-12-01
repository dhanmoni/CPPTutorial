#include<iostream>
#include<vector>
#include<array>
#include<algorithm>
 
void fib_without_rec() {
  int num, n1 = 0, n2 = 1, sum;
  std::cout << "Enter the length of the series: ";
  std::cin >> num;

  std::cout << n1 << " " << n2 << " ";
  for(int i = 2; i < num; i++) {
    sum = n1 + n2;
    std::cout << sum << " ";
    n1 = n2;
    n2 = sum;
  }
 }

 void fib(int num) {
   static int n1 = 0, n2 = 1, sum; 
   if( num > 0) {
    sum = n1 + n2;
    std::cout << sum << " ";
    n1 = n2;
    n2 = sum;
    fib(num-1);
   }
 }

void fib_with_rec() {
  int num;
  std::cout << "Enter the length of the series: ";
  std::cin >> num;
  std::cout << "0 " << "1 ";
  fib(num - 2);
}

int main() {
  fib_with_rec();
  return 0;
}