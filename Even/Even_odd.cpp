#include<iostream>
//finding if no. is even or odd
//if divisible by 2 then no is even.
using namespace std;
int even_odd(int n)
{
    int i;
    if(n%2==0)
    {
        cout<<n<<" is a even number";
    }
    else
    {
        cout<<n<<" is odd number";
    }
}
int main()
{
    int no;
    cout<<"Enter the number : ";
    cin>>no;
    even_odd(no);
}
