/*
for printing the following pattern
5  4  3  2  1  
5  4  3  2  1
5  4  3  2  1
5  4  3  2  1
5  4  3  2  1
*/

#include<iostream>
using namespace std;

int main()
{ int row,column,n ;

    for(row=1;row<=5;row++)
    {
        for(column=5;column>=1;column--)
        {
            cout<<column<<"  ";
        }
        
       cout<<endl; 
       
    }
 }
    