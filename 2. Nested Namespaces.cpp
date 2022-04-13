#include<iostream>
using namespace std;
namespace Operations
{
    namespace sumAndDiff
    {
        int add(int a, int b)
        {
            return a+b;
        }
        int subtract (int a ,int b)
        {
            return a-b;
        }
    }
    namespace prodAndQuot
    {
        int multiply(int a,int b)
        {
            return a*b;
        }
        float divide (int a , int b)
        {
            return a/b;
        }
    }
}
int main()
{
    int a =25,b=5;
    float quotient=Operations::prodAndQuot::divide(a,b);
    int product=Operations::prodAndQuot::multiply(a,b);
    int sum=Operations::sumAndDiff::add(a,b);
    int difference=Operations::sumAndDiff::subtract(a,b);
    cout<<"From First inner Namespace"<<endl;
    cout<<"Sum : "<<sum<<endl;
    cout<<"Difference : "<<difference<<endl;
    cout<<"From Second inner Namespace"<<endl;
    cout<<"Product : "<<product<<endl;
    cout<<"Quotient : "<<quotient<<endl;
    return 0;
}
