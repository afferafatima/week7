#include<iostream>
using namespace std;
void calculatepercentage(int lines);//function that gives output on console
main()
{
    int lines;    //variable used to store number of lines
    cout<<"Number of lines to pass for input data : ";
    cin>>lines;
    calculatepercentage(lines);
    
}
void calculatepercentage(int lines)
{
    float P1=0; 
    float P2=0;
    float P3=0;
    float P4=0;
    float P5=0;
    for(int x=1;x<=lines;x++)
    {
        int number;
        cout<<"Enter number : ";
        cin>>number;
        if(number<200)
        {
           
            P1=1+P1;
           
        }
        else if(number>=200&&number<400)
        {
            
            P2=1+P2;
        
        }
        else if(number>=400&&number<600)
        {
            
            P3=1+P3;
          
        }
        else if(number>=600&&number<800)
        {
            
            P4=1+P4;
            //return P4;
        }
        else if(number>=800&&number<=1000)
        {
            
            P5=1+P5;
            //return P5;
        }
         
    } 
   cout<<"P1 : " <<(P1/lines)*100<<" %"<<endl;
   cout<<"P2 : " <<(P2/lines)*100<<" %"<<endl;
   cout<<"P3 : " <<(P3/lines)*100<<" %"<<endl;
   cout<<"P4 : " <<(P4/lines)*100<<" %"<<endl;
   cout<<"P5 : " <<(P5/lines)*100<<" %"<<endl;

}