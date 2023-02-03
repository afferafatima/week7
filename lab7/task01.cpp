#include<iostream>
using namespace std;
main()
{
    int total;
    cout<<"Total numbers you want the series of : ";
    cin>>total;
    int previous=0;
    int current=1;
    cout<<previous<<","<<current;
    int next;
    for(int count=1;count<=total-2;count++)
    {

        next=previous+current;
        cout<<","<<next;
        previous=current;
        current=next;

    }
    
}