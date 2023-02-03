#include<iostream>
using namespace std;
int digitsum(int number); //function that add the digits of input number 
main()
{
    int number; //variable that takes input
    cout<<"Enter number : ";
    cin>>number;
    int sum=digitsum(number); //variable that shows output result
    cout<<"Sum : "<<sum<<endl;

}
int digitsum(int number)
{
    int sum=0;
    int remainder;//variable used to store digit
    while(number>0) 
    {
       
        remainder=number%10;
        number=number/10;
        sum=sum+remainder;
  
    }   
    return sum;
}