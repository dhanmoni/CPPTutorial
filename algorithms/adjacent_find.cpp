#include<iostream>
#include<vector>
#include<algorithm>

int main() {

  int A[]={12,14,17,17,19};  
  int n = sizeof(A) / sizeof(A[0]);  
  int *ti = std::adjacent_find(A, A+n);  
  std::cout << *ti;  
  return 0;
}