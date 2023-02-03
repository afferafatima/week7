#include<iostream>
using namespace std;
void Nestedloop(int rows);
main()
{
    int rows;
    cout<<"Enter number of desired rows : ";
    cin>>rows;
    Nestedloop(rows);
}
void Nestedloop(int rows)
{
    for(int i=rows;i<=rows&&i>=1;i--)
    {
        for(int j=i;j<=i&&j>=1;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}