#include<iostream>
using namespace std;
int totaldigits(int input);//function used to give total digits in input number
main()
{
    int input;               //variable used to store number
    int total_digits;        //variable used to store value from function   
    cout<<"Enter number : ";
    cin>>input;              
    total_digits=totaldigits(input);
    cout<<"Total digits are :"<<total_digits;
}
int totaldigits(int input)
{
    int x=0;
    while(input!=0)
    {
        input=input/10;
        
        x=x+1;
    }
    return x;
}