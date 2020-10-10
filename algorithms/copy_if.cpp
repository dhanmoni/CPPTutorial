#include<iostream>  
#include<algorithm>  
#include<vector>  
int main()  
{  
    std::vector<int> a = {20,10, 4,-4,-10};  
    std::vector<int> b (a.size());  
    auto ti = std::copy_if(a.begin(),a.end(),b.begin(),[](int j){ return !(j<0);});  
    b.resize(std::distance(b.begin(),ti));  
    std::cout<<"b contains:";  
    for (int& x:b) std::cout<<" "<<x;  
    std::cout<<"\n";  
    return 0;  
}