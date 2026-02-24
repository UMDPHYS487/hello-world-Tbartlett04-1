#include <iostream>
#include <cmath>
using namespace std;
int factorial(int i) {
    if (i==1){
      return i; 
    }
    else{
      return tgamma(i+1);
    };
  }
int main() {
  // Exercise 1
  std::cout << "This is a text block!\n";
  // Exercise 2
  for (int i=1;i<11;i++){
    std::cout << "Current loop number is "<< i << std::endl;
  }
  std::cout << "\n";
  // Exercise 3
  for (int i=1;i<11;i++){
    if (i==1){
      std::cout << "Factorial of "<< i << " is " << i << std::endl;
    }
    else{
      std::cout << "Factorial of "<< i << " is " << int(std::tgamma(i+1)) << std::endl;
    }
  }
  // Exercise 4
  std::cout << "\n";
  for (int i=1;i<11;i++){
    std::cout << "Factorial of "<< i << " is " << factorial(i) << std::endl;
  }
  // Exercise 5
  int a;
  std::cout << "Please input an integer value N:  ";
  cin >> a;
  int output = factorial(a);
  cout << "The value you entered is " << a << " and its factorial is " << output << "\n";
  }
