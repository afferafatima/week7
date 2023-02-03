#include<iostream>
using namespace std;
void counting(int number);
main()
{
    int number;
    cout<<"Enter number : ";
    cin>>number;
    counting(number);
}
void counting(int number)
{
    for(int value=1;value<=number;value++)
    {
        cout<<value<<endl;
    }
}