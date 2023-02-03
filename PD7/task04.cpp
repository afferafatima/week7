#include<iostream>
using namespace std;
main()
{
    float number;
    cout<<"Enter range : ";
    cin>>number;
    for(int count = 1;count<=number;count++)
    {
        
               
        if((count%4)==0)
        {
            cout<<(count*10)<<" , ";
        }
        else
        {
            cout<<count<<" , ";
        }
       
    }
}    



