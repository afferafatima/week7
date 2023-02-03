#include<iostream>
using namespace std;
void output(float lines);
main()
{
    float lines;
    cout<<"Count of Cargo for transportation : ";
    cin>>lines;
    output(lines);
}
void output(float lines)
{           
        // "C" represents cargo
    float minibusC=0;   //variable to sum tonns loaded by minibus
    float truckC=0;     //variable to sum tonns loaded by truck
    float trainC=0;     //variable to sum tonns loaded by train
      //P represents percentage  
    float P_minibus;   //variable to store percentage of cargo by minibusC
    float P_truck;     //variable to store percentage of cargo by truckC
    float P_train;     //variable to store percentage of cargo by trainC 
    float avg_price;
    for(float line=1;line<=lines;line++)
    {
        float cargo;
        cout<<"Enter tonns for cargo "<<line<<" : ";
        cin>>cargo;
        if(cargo<=3) //minibusC
        {
            minibusC=minibusC+cargo;
        }
        if(cargo>3 && cargo<=11) //truckC
        {
            truckC=truckC+cargo;
        }
        if(cargo>11 ) //trainC
        {
            trainC=trainC+cargo;
        }

    }
        float sum=minibusC+truckC+trainC;//sum of all cargo
        avg_price=((minibusC*200)+(truckC*175)+(trainC*120))/sum;
        P_minibus=(minibusC/sum)*100;
        P_truck=(truckC/sum)*100;
        P_train=(trainC/sum)*100;
        cout<<"Average price per ton of carried cargo : "<<avg_price<<endl;
        cout<<"Percentage of cargo by minibus : "<<P_minibus<<"%"<<endl;
        cout<<"Percentage of cargo by truck : "<<P_truck<<"%"<<endl;
        cout<<"Percentage of cargo by train : "<<P_train<<"%"<<endl;
       
}
