#include <iostream>

using namespace std;

int main()
{
    char *p0 = new char[10];

    char *p1 = new char[10]();

    //char *p1 = new char[10](2);

    delete []p0;
    delete p1;

    return 0;
}