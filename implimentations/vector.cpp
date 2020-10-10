#include<iostream>
#include<vector>
#include<array>
#include<algorithm>
#include<chrono>

class MyVector {
  private:
    int size;
    int capacity;
    int *arrayHolder;
  public:
    MyVector() {
      this->capacity = 5;
      this->size = 0;
      this->arrayHolder = new int[5];
    }

    ~MyVector() {
      delete[] this->arrayHolder;
    }

    void getSize() {
      std::cout<< this->size << std::endl;
    }

    void getCapacity() {
      std::cout<< this->capacity << std::endl;
    }

    void print() {
      for(int i =0; i < this->size; i++) {
        std::cout << this->arrayHolder[i] << " ";
      }
    }

    const int operator[](int i) {
      if(i < this->size) return 0;
      return this->arrayHolder[i];
    }

    void add(int k){
      if(this->capacity < this->size + 1) {
        this->capacity *= 2; //increase capacity;
        int *tempArr = new int[this->capacity];
        for(int i = 0; i < this->size; i++ ) {
          tempArr[i] = this->arrayHolder[i];
        }
        delete[] this->arrayHolder;
        this->arrayHolder = tempArr;
        this->arrayHolder[this->size] = k;
        this->size++;
      } else {
        this->arrayHolder[this->size] = k;
        this->size++;
      }
    }
};

int main() {
  MyVector mv;
  
  std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();

  for(int i = 0; i < 10; i++) {
    mv.add(i * 2);
  }
  mv.getSize();
  mv.getCapacity();
  mv.print();
  std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
  std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count()<< std::endl;

  return 0;
}