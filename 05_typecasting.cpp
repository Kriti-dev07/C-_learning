#include <iostream>
using namespace std;

int main() {
    // Implicit type casting
    int a = 10;
    float b = 5.5;
    float c = a + b;  // int to float
    cout << " type casting (int to float): " << c << endl;

    // Explicit type casting
    double d = 9.8;
    int e = (int)d;  // double to int
    cout << " type casting (double to int): " << e << endl;

    float x=45.46;
    cout<<"type casting (float to int): "<<(int)x;
  

    return 0;
}
