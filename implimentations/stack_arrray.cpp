#include<iostream>
#include<vector>
#include<array>
#include<algorithm>
#define MAX 1000

class Stack {
  private:
  int top;
  public:
  Stack(){
    top = -1;
  };
  int a[MAX];

  bool push(int num){
    if(top > MAX) {
      std::cout << "Stack overflow \n";
      return false;
    }
    a[++top] = num;
    std::cout << num << " pushed into the stack \n";
    return true;
  }

  int pop() {
    if(top < 0) {
      std::cout << "No Element in the stack!\n";
      return 0;
    }
    int popped = a[top--];
    return popped;
  }
  void print(){
    if(top < 0) {
      std::cout << "No element in the stack\n";
    } else {
      for(int i = 0; i <= top; i++){
        std::cout << a[i] << "\t";
      }
    }
  }
  void peek(){
    if(top < 0) std::cout << "No Element in the stack!";
    else {
    std::cout << "Top element is " << a[top - 0];
    }
  }
};

int main() {
  Stack s1;
  s1.push(10);
  s1.push(20);
  s1.push(30);
  s1.peek();
  s1.print();
  s1.pop();
  s1.print();
  s1.peek();

  return 0;
}