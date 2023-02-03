#include<iostream>
using namespace std;
void increment(int rows);
void decrement(int rows);
main()
{
    int rows;
    cout<<"Enter number of rows : ";
    cin>>rows;
    rows=rows/2;
    increment(rows);
    decrement(rows);


}
void increment(int rows)
{
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void decrement(int rows)
{
   for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=rows-i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

