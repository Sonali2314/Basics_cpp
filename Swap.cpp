#include<iostream>
using namespace std;
int main()
{
    int a=5,b=10;
    cout<<"a = "<<a<<"\nb = "<<b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After Swapping : "<<endl;
    cout<<"a = "<<a<<"\nb = "<<b<<endl;
    return 0;
}
