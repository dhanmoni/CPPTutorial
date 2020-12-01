#include<iostream>
#include<vector>
#include<array>
#include<algorithm>

template <typename T>
class Node {
  public:
    T value;
    Node *next;
    Node(T value) {
      this->value = value;
    }
};

template <typename T>
class Stack {
  private:
    int size;
    Node<T> *top = NULL;
    Node<T> *itr = NULL;
  public:
    Stack() {
      this->size = 0;
    }
   void push(T value) {
     if(this->top == NULL) {
       this->top = new Node<T>(value);
     } else {
       Node<T> *tmp = new Node<T>(value);
       tmp->next = this->top;
       this->top = tmp;
     }
     this->size++;
   }
   Node<T> *pop(){
     if(this->top == NULL) return NULL;
     Node<T> *tmp = this->top;
     this->top = this->top->next;
     this->size--;
     return tmp;
   }
   Node<T> *peek(){
     return this->top;
   }
   int getSize(){
     return this->size;
   }
   Node<T> *iterator() {
     this->itr = this->itr->next;
     return this->itr;
   }
   T ptr(){
     return this->itr->value;
   }

   void printStack() {
     if(this->size < 1) {
       std::cout << "Empty stack!" << std::endl;
     } else {

     }
   }
  

};

int main() {
  Stack<int> stk1;
  stk1.push(10);
  stk1.push(20);
  stk1.push(30);
  stk1.push(40);

  while(stk1.iterator() != NULL) {
    std::cout << stk1.ptr() << " ";
  }
  std::cout << "Size = " << stk1.getSize() << std::endl;
  stk1.pop();

  while(stk1.iterator() != NULL) {
    std::cout << stk1.ptr() << " ";
  }
  std::cout << "Size = " << stk1.getSize() << std::endl;

  return 0;
}