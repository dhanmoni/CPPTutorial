#include <iostream>
#include <chrono> 
using namespace std::chrono; 
// Driver code
int main()
{
        auto start = high_resolution_clock::now(); 

// USING IF ELSE AND MULTIPLE TIMES CHECKING MOD ==BAD WAY
  for(int i = 1; i <=100; i++){
        if(i % 3 == 0 && i % 5 == 0){
            std::cout << "fizzbuzz" <<std::endl;
        } else if (i % 3 == 0) {
            std::cout << "fizz" <<std::endl;
        } else if(i % 5 == 0){
            std::cout << "buzz" <<std::endl;
        } else {
            std::cout << i <<std::endl;
        }
    } 
   
   //GOOD WAY
    for(int i = 1; i <= 100; i++){
        std::string res = "";
        if(i % 3 == 0)  res+="fizz";
        if(i % 5 == 0) res+="buzz";
      if(res == "") std::cout << i <<std::endl;
      else std::cout << res <<std::endl;
    }
    
    //BEST WAY
    int count_3 = 0;
    int count_5 = 0;
    
    for(int i = 1; i< 100; i++){
        std::string res2 = "";
        count_3++;
        count_5++;
        if(count_3 == 3) {
            res2+= "fizz";
            count_3 = 0;
        } 
        if(count_5 == 5) {
            res2+= "buzz";
            count_5 = 0;
        }
        if(res2 == "") std::cout << i <<std::endl;
        else std::cout << res2 <<std::endl;
    }
   
    
    
    // Get ending timepoint 
    auto stop = high_resolution_clock::now(); 
  
    // Get duration. Substart timepoints to  
    // get durarion. To cast it to proper unit 
    // use duration cast method  ---- 356, 429, 414, 294, 299
    auto duration = duration_cast<microseconds>(stop - start); 
  
    std::cout << "Time taken by function: "
         << duration.count() << " microseconds" << std::endl; 
  
    
    return 0;
}