#include<iostream>
#include<cmath>
using namespace std;
int calculate_GCD(int number1,int number2);         //function that returns gcd;
int calculate_LCM(int number1,int number2,int gcd); //function that returns lcm;

main()
{
    int number1;   //variable used to store value1
    int number2;   //variable used to store value2
    int gcd;       //variable used to store returning value from function calculate_GCD()
    int lcm;       //variable used to store returning value from function calculate_LCM()
    cout<<"Enter number1 : ";
    cin>>number1;
    cout<<"Enter number2 : ";
    cin>>number2;
 	//function returning value of GCD
    gcd=calculate_GCD(number1,number2);
	//function returning value of LCM
    lcm=calculate_LCM(number1,number2,gcd);
    cout<<"Highest common factor/Greatest common divisor is : "<<gcd<<endl;
    cout<<"Least Common Multiple is : "<<lcm<<endl;

}
int calculate_GCD(int number1,int number2)
{
    int gcd;
    
        for(int x=1;x<=number1;x++)
        {
            if((number1%x)==0 && (number2%x)==0)
            {
                gcd=x;
            }
        }
        
    
    return gcd;
    
}
int calculate_LCM(int number1,int number2,int gcd)
{
    int lcm;
    lcm=(number1*number2)/gcd;
    return lcm;
}