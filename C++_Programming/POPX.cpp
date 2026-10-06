#include<iostream>
using namespace std;

int Addition(int a, int b)
{
    int ans = 0;
    ans = a + b;
    return ans;
}

int main()
{
    int value1 = 0, value2 = 0, result = 0;

    cout<<"Enter first number: \n";
    cin>>value1;

    cout<<"Enter second number: \n";
    cin>>value2;

    result = Addition(value1, value2);

    cout<<"Answer is: "<<result<<"\n";



    return 0;
}