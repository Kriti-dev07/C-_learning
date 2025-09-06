#include<iostream>
using namespace std;
int main(){
    //concept of an array 
    int marks[]={23,45,56,70};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
cout<<"These are maths marks "<<endl;
    int maths_marks[]={23,90,56,78};
    cout<<maths_marks[0]<<endl;
    cout<<maths_marks[1]<<endl;
    //value of an array can be changed
    maths_marks[2]=93;
    cout<<maths_marks[2]<<endl;
    cout<<maths_marks[3]<<endl;
cout<<"These are english marks"<<endl;

//array with loops

int english_marks[]={45,799,233,90};
for (int i = 0; i < 4; i++)
{
   cout<<"the value of english marks "<<english_marks[i]<<endl;
}

// array with pointers
int *p = marks;
cout<<"the value of marks[0] "<<*p<<endl;
cout<<"the value of marks[1] "<<*(p+1)<<endl;
cout<<"the value of marks[2] "<<*(p+2)<<endl;
cout<<"the value of marks[3] "<<*(p+3)<<endl;

//array with pointers and increment and decrement 
int *z=maths_marks;
cout<<*(z++)<<endl;
cout<<*(z++)<<endl;
cout<<*(z++)<<endl;
cout<<*(z)<<endl;

    return 0;
}