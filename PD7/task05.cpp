#include<iostream>
using namespace std;
main()
{
    int number;
    cout<<"Enter triangle number : ";
    cin>>number;
    int dots=0;
    for(int tri_number=1;tri_number<=number;tri_number++)
    {
        
        dots=dots + tri_number;

    }
    cout<<"Total dots : "<<dots;
}