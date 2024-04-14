#include<iostream>
using namespace std;
void isPrime(int n)
{

    if(n<=1)
    {
        cout<<n<<" is not a prime number ";
        return;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            cout<<n<<" is not a prime number ";
            return;
        }
    }
    cout<<n<<" is a prime number ";

}
int main()
{
    int no;
    cout<<"Enter the number : ";
    cin>>no;
    isPrime(no);
    return 0;
}
