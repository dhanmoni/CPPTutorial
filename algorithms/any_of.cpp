#include <iostream>  
#include <algorithm>  
#include <array>  
#include<vector>
int main()  
{  
   std::vector<int> vec = {10, 22, 80, 0, -22}; 
   if(std::any_of(vec.begin(), vec.end(), [](int k){return k < 0;}))  {
     std::cout << "Negative number exists!" <<std::endl;
   } else {
     std::cout << "All good!";
   }
   std::array<int, 4> arr = {1, 2, 4, 5};
   for(int num : arr) {
     std::cout << num;
   }
}  