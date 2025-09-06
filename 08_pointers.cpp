#include<iostream>
using namespace std;
int main(){
    int a=3;
    int * b = &a;
    //&-- address of operator
    cout<<"The address of a is  "<<&a<<endl;
    cout<<"The address of a is  "<<b<<endl;
    // *--(the value at) dereference operator
    cout<<"The value of a is "<<*b<<endl;

//pointer to pointer
    int **c=&b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the value at address c is "<<*c<<endl;
    cout<<"the value at value(value of c) "<<**c<<endl;


// difference in break and continue
int i;
cout<<"printed with break"<<endl;
    for ( int i = 0; i <4  ; i++)
    {
      if (i==2)
      {
    break;
      }
          
          cout<< i<<endl;
    }
    cout<<"printed with continue"<<endl;
          int j;
    for (int j= 0; j<5 ; j++){
        if (j==2)
        {
            continue;
        }
    
cout<<j<< endl;
    }
    return 0;
}