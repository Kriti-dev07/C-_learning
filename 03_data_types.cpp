#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
int i=42;
float f=3.14f;    //f to store as float otherwise it would be stored as double
double d= 2.23456 ;
char c='x';
bool b=true;
string s= "C++ is a programming language ";

cout << "int: " << i << endl;
    cout << "float: " << f << endl;
    cout << "double: " << d << endl;
    cout << "char: " << c << endl;
    cout << "bool: " << b << endl;
    cout << "string: " << s << endl;

    return 0;
}


