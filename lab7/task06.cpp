#include<iostream>
using namespace std;
int validinteger(int number);
main()
{
    int number;//variable that takes input from user;
    cout<<"Enter a number :";
    cin>>number;
    int output=validinteger(number);

}
int validinteger(int number)
{
    while(number<1)
    {
        cout<<"ERROR ! Inser a number greater than zero."<<endl;
        cout<<"Enter the number again : ";
        cin>>number;
    }
    
}