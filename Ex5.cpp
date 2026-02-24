#include <iostream>
#include <cmath>
using namespace std;
int factorial(int i){
    if (i==1){
      return i; 
    }
    else{
      return tgamma(i+1);
    };
}
int main() {
  // Exercise 5
  int a;
  std::cout << "Please input an integer value N:  ";
  cin >> a;
  int output = factorial(a);
  cout << "The value you entered is " << a << " and its factorial is " << output << "\n";
  }
