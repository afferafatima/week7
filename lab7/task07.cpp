#include<iostream>
using namespace std;
main ()
{
    int sum=0;
    for(int x=1;x<=100;x++)
    {
        sum=x+sum;
    }
    cout<<"Sum is :"<<sum<<endl;
}
