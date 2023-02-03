#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    for(int count=-1 ; count <=5  ; count=count+1)
    {
        sum=sum+count;
    }   
    cout<<sum; 
}
/*{
    for(int count=1 ; count <=100  ; count=count+1)
    {   
        if(count%2==0)
        {
            cout<<count<<endl;
        }
    }
}*/    