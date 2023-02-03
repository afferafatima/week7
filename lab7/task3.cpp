#include<iostream>
using namespace std;
int frequency(int number,int digit);
main()
{
    int number;
    int digit;
    int total_frequency;
    cout<<"Enter Number : ";
    cin>>number;
    cout<<"Enter digit you want to check frequency of : ";
    cin>>digit;
    total_frequency=frequency(number,digit);
    cout<<"Total frequency is : "<<total_frequency<<endl;

}
int frequency(int number,int digit)
{   int counter=0;
    int remainder;
    while(number>0)
    {
       
        remainder=number%10;
        number=number/10;
        if(remainder==digit)
        {
            counter=counter+1;  
             
        }
       
    }


  return counter;
}