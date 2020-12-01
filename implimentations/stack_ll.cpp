#include <iostream>

class Node {
public:
  int data;
  Node* next;
  Node(int num){
    this->data = num;
  }
};

class Stack {
  public:
  int size;
  Node* top = NULL;
    Stack(){
      this->size = 0;
    }
    void push(int num){
      Node* newNode = new Node(num);
      newNode->next = this->top;
      // std::cout << newNode->data << std::endl;
      this->top = newNode;
      // std::cout << this->top->data << std::endl;
      this->size++;
    }
    void pop(){
      if(this->top == NULL) {
        std::cout << "List is empty!" << std::endl;
        return;
      } else {
        Node* temp = this->top;
        this->top = temp->next;
        std::cout << temp->data << " is popped" << std::endl;
        delete temp;  
      }
    }
    void peek() {
      if(this->top == NULL) {
        std::cout << "No item in the list! \n";
      } else {
        std::cout << "Top is " << this->top->data << std::endl;
      }
    }
    void print() {
      if(this->top == NULL) {
        std::cout << "List is empty!" << std::endl;
      } else {
        Node* temp = this->top;
        while(temp != NULL) {
          std::cout << temp->data << " ";
          temp = temp->next;
        }
        std::cout << std::endl;
      }
    }
};

int main(){
  Stack S1;
  S1.print();
  S1.push(10);
  S1.push(15);
  S1.peek();
  S1.push(20);
  S1.peek();
  S1.push(30);
  S1.peek();
  S1.print();
  S1.pop();
  S1.print();
  S1.peek();
  return 0;
}