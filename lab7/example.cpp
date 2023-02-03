#include<iostream>
using namespace std;
main()
{ 


    string word;
    cout<<"Are you happy : ";
    cin>>word;
    while(word!="yes")
    {
        cout<<"...."<<endl;
        cout<<"ARe you happy : ";
        cin>>word;
        
    } 

     
    int number;
     cout<<"Enter any number : ";
    cin>>number;

    while(number!=7)
    {
        cout << "This is not my lucky number. "<<endl;
        cout<<"Enter any number : ";
        cin >> number;
    }
}