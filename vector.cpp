#include<iostream>  
#include<vector>  
#include<string>
  
int main() 
{  
  std::vector<std::string> v1 {"yo!", "what's up"};  
  std::vector<int> v2;
  std::vector<int> v3 = {10, 20, 30};

  v1.push_back("hello");  
  v1.push_back("world"); 
  v2.push_back(1); 
  v2.push_back(2); 

  //ITERATING THROUGH A VECTOR USING DIFFERENT METHODS=

  for(std::vector<std::string>::iterator itr=v1.begin();
  itr!=v1.end();++itr) { 
    std::cout<<*itr <<std::endl;
  }
  for(std::string str : v1) {
    std::cout << str << std::endl;
  }

  for(int i = 0; i < v2.size(); i++) {
    std::cout << v2.at(i) << std::endl;
  }

  std::cout << v2.back(); // 2
  std::cout << v1.front(); // hello
  std::cout <<std::endl;
  std::cout << "=====" <<std::endl;

  //SWAP 2 VECTORS=
  v2.swap(v3);

  for(int i =0; i < v2.size(); i++) {
    std::cout << "v2 elements = "<<v2[i] <<std::endl;
  }
  for(int nums : v3) {
    std::cout << "v3 elements = " << nums <<std::endl;
  }

  v2.pop_back();
  for(int i =0; i < v2.size(); i++) {
    std::cout << "v2 elements after poping "<<v2[i] <<std::endl;
  }

  //CLEAR THE VECTOR
  v3.clear();
  if(v3.empty()) 
    std::cout << "v3 is empty" << std::endl;

  v3.insert(v3.begin(), 5);
  for(int nums : v3) {
    std::cout << "v3 elements after inserting= " << nums <<std::endl;
  }

  std::vector<int> v4{1,2,3,4,5}; 
  std::vector<int> v5{6,7,8,9,10};

  //ERASE ELEMENTS=
  v4.erase(v4.begin()+2); 
  
  //CHECK CAPACITY=  
  std::cout << v5.capacity();

  //INSERT
  v4.insert(v4.end(),v5.begin(),v5.begin()+5);  

  for(int i=0;i<v4.size();i++)  
    std::cout<<v4[i]<<" "; 

  std::cout<<std::endl;

  //VECTOR ASSIGN
  std::vector<char> v6 {'C', '+', '+'};
  std::vector<char> v7;
  v7.assign(v6.begin(), v6.end() - 1);
  for(char ch : v7) {
    std::cout << ch; //C+
  } 

  std::cout<<std::endl;
  std::cout<<std::endl;

  
  //OPERATOR=() AND OPERATOR[]()
  std::vector<std::string> v8{"java"};  
  std::vector<std::string> v9{".NET"};  
  std::cout<<"initially,value of v9 is :";  
  for(int i=0;i<v9.size();i++)  
  std::cout<<v9[i];  
    
  std::cout<<'\n';  
  std::cout<<"Now, the value of vector v9 is :";  
  v9.operator=(v8);  
  for(int i=0;i<v9.size();i++)  
  std::cout<<v9[i]; 
 
  std::vector<int> v10{1,2,3,4,5};  
  for(int i=0;i< v10.size();i++)  
  std::cout<<v10.operator[](i)<<" ";  
  std::cout<< '\n';

  //EMPLACE AND EMPLACE_BACK=

  //insert() function is used to copy the objects into the vector while 
  //emplace() function is used to construct them inside the vector only thus 
  ///it avoids unnecessary operations to be performed.
  std::vector<char> v11 {'C', '+'};
  v11.emplace(v11.begin(), 'C');
  v11.emplace(v11.begin()+1, '/');
  v11.emplace_back('+');
  for(char ch: v11) {
    std::cout << ch;
  }
  std::cout << std::endl;
  std::cout << std::endl;

  //ITERATE USING ITERATOR
  std::vector<std::string> branch {"CSE", "ME", "EE"};
  for(std::vector<std::string>::iterator it = branch.begin(); it != branch.end(); it++ ) {
    std::cout << *it << " ";
  }

  //REVERSE ITERATOR TO REVERSE A VECTOR=
  std::cout << std::endl;
  for(std::vector<std::string>::reverse_iterator rit = branch.rbegin(); rit != branch.rend(); rit++) {
    std::cout << *rit << " ";
  }
  return 0;   
}  