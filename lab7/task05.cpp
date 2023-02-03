#include<iostream>
using namespace std;
void printTable(int number); //funtion that prints required table
int main()
{
    int number; //variable for input from user
    cout<<"Enter Number : ";
    cin>>number;
    printTable(number);
    
}
void printTable(int number)
{
    for(int x=1;x<=10;x++)
    {
        cout<<number<<" X "<<x<<" = "<<number*x<<endl;
    }

}
