#include <iostream>

using namespace std;

int  main()
{
    int *p = NULL;
    for(int i =0; i < 10; i++)
    {
        free(p);
        cout <<"Free:"<< i << endl;
    }
    cout<<"============"<<endl;

    int *p1 = (int *)malloc(sizeof(int) *5);
    for(int i =0; i < 3; i++)
    {
        free(p1);
        cout <<"Free:"<< i << endl;
    }
}