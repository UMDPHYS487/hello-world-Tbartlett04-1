#include <iostream>
#include <cmath>

int main() {
  // Exercise 3
  for (int i=1;i<11;i++){
    if (i==1){
      std::cout << "Factorial of "<< i << " is " << i << std::endl;
    }
    else{
      std::cout << "Factorial of "<< i << " is " << int(std::tgamma(i+1)) << std::endl;
    }
  }
}
