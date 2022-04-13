#include<iostream>
namespace org
{
    using namespace std;
    class Emp
    {
        int ID;
        string name;
    public:
        Emp(int a,string b)
        {
            ID=a;
            name=b;
        }
        void printData()
        {
            cout<<"Employee ID: "<<ID<<endl;
            cout<<"Employer Name: "<<name<<endl;
        }
    };
}
int main()
{
    using namespace org;
    Emp e(123,"Roshan");
    e.printData();
    return 0;
}
