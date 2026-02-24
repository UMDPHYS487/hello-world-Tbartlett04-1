#include <iostream>
#include <bitset>

int main(){
    std::bitset<8> b{0b01110010};
        std::cout << b << "(initial value)\n";

        for (int i=0;i<b.size();i++)
        {
           b.flip(i);
        }
        std::cout << b << "(final value)\n";
}