/*
print pattern
               1
            2  1
         3  2  1
      4  3  2  1
   5  4  3  2  1
*/

#include<iostream>
using namespace std;

int main()
{ int row,column,n;
cout<<"enter number";
cin>>n;
    for(row=1;row<=n;row++)
    {
        for(column=1;column<=n-row;column++) 
        {
            cout<<"  ";
        }
        for(column=row;column>=1;column--)
        {
            cout<<column<<" ";
        }
        cout<<endl;   
    }
}