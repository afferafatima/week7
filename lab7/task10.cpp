#include<iostream>
using namespace std;
void calculatemoney(int age,float toy_price,float price); // function for calculation;
main()
{
    int age; //age of lilly
    float price; //price of Iphone
    float toy_price; //price of toy lilly received
    cout<<"Enter Lilly's age : ";
    cin>>age;
    cout<<"Enter Price of Iphone : ";
    cin>>price;
    cout<<"Enter price of each toy : ";
    cin>>toy_price;
    calculatemoney(age,toy_price,price);
}
// function that calculates net_money,compare it and give output
void calculatemoney(int age,float toy_price,float price)
{
    int oddyears=0;          //variable that calculates number of odd years
    int evenyears=0;         //variable that calculates number of odd years
    int Emoney;      //variable that calculates money saved in each even year
    float t_Emoney=0;  //variable that calculates total money saved in even years
    float t_Omoney=0;   //variable that calculates total money saved in even years
    float t_money;             //variable that stores total saved money
    for(int agecount=1;agecount<=age;agecount=agecount+1)
    {
            if(agecount%2!=0)
            {
                oddyears=oddyears+1;
            }
            else if(agecount%2==0)
            {
                evenyears=evenyears+1;
                Emoney=(evenyears*(10))-1;
                t_Emoney=t_Emoney+Emoney;
            }
            
    }
    t_Omoney=oddyears*(toy_price);
    //cout<<t_Emoney<<endl;
    t_money=t_Emoney+t_Omoney;
    //cout<<t_money;
    if((t_money-price)>0)
    {
        cout<<"Yes!"<<endl;
        cout<<t_money-price<<"$ is the remaining money after purchase.";
    }
    if((t_money-price)<0)
    {
        cout<<"No!"<<endl;
        cout<<price-t_money<<"$ is the insufficiency amount.";
    }
}