//different types of variable declaration
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int value;
    value=10;
    int val1=20;
    int val2{30};
    cout<<value<<"\t"<<val1<<"\t"<<val2<<endl;
    bool a=3<5;
    //as 3<5 is true it will show output as 1
    cout<<a<<endl;
    string str="Hello, World! ";
    cout<<str<<endl;
    char c='A';
    cout<<c<<endl;
    float f=5.6788;
    cout<<f<<endl;
    return 0;
}
