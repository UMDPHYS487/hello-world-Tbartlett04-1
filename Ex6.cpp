#include <iostream>
#include <cmath>
using namespace std;

int y;
int *x;

int main() {
y = 20;
x = &y;
cout << x << "\n";
cout << *x << "\n";
y = 40;
cout << x << "\n";
cout << *x << "\n";
}
// Memory location stays the same even after variable is reassigned