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
  // Exercise 4
  std::cout << "\n";
  for (int i=1;i<11;i++){
    std::cout << "Factorial of "<< i << " is " << factorial(i) << std::endl;
  }
  }
