#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    int scenario;
    std::cout << "Please input an integer value N:  ";
    cin >> a;
    if (a<10 and a%2==0){
        scenario = 1;
    }
    else if (a%2==1){
        scenario = 2;
    }
    else{
        scenario = 3;
    }
    switch(scenario){
        case 1:
            std::cout << a*a << "\n";
            break;
        case 2:
            std::cout << a/2.0 << "\n";
            break;
        case 3:
            std::cout << "hahaha" << "\n";
            break;
    }
}