#include <iostream>

using namespace std;

class A
{
    public:
    void Func()
    {
        cout <<"Func of class A"<<endl;
    }
};

int main()
{
    A *p;
    if(1)
    {
        A *a;
        p = a;
    }
    p->Func();
    cout<<sizeof(char)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(unsigned int)<<endl;
    cout<<sizeof(long)<<endl;
    cout<<sizeof(unsigned long)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(void*)<<endl;
    cout<<sizeof(long long)<<endl;
    cout<<sizeof(long double)<<endl;

    return 0;
}