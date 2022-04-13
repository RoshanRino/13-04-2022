#include<iostream>
using namespace std;
namespace Operations
{
    int add(int a, int b)
    {
        return a+b;
    }
    int subtract (int a ,int b)
    {
        return a-b;
    }
    int multiply(int a,int b)
    {
        return a*b;
    }
    float divide (int a , int b)
    {
        return a/b;
    }
}
int main()
{
    int a =25,b=5;
    float quotient=Operations::divide(a,b);
    int product=Operations::multiply(a,b);
    int sum=Operations::add(a,b);
    int difference=Operations::subtract(a,b);
    cout<<"Sum : "<<sum<<endl;
    cout<<"Difference : "<<difference<<endl;
    cout<<"Product : "<<product<<endl;
    cout<<"Quotient : "<<quotient<<endl;
    return 0;
}
