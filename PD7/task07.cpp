#include<iostream>
using namespace std;
void calcualtepercentage(int lines);//function that gives output on console
main()
{
    int lines;
    cout<<"Enter total digits you want to enter : ";
    cin>>lines;
    //function call
    calcualtepercentage(lines);

}
void calcualtepercentage(int lines)

{
    float P2=0; 
    float P3=0;
    float P4=0;
    for(int line=1;line<=lines;line++)
    {
        int digit;
        cout<<"Enter Digit "<<line<<" : ";
        cin>>digit;
        if(digit%2==0)
        {
           P2=P2+1;
        }
        if(digit%3==0)
        {
            P3=P3+1;
        }
        if(digit%4==0)
        {
            P4=P4+1;
        }

    }
    cout<<"Percentage of numbers completely divisble by 2 : "<<(P2/lines)*100<<" %"<<endl;
    cout<<"Percentage of numbers completely divisble by 3 : "<<(P3/lines)*100<<" %"<<endl;
    cout<<"Percentage of numbers completely divisble by 4 : "<<(P4/lines)*100<<" %"<<endl;
}