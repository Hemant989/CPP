/*
for printing the following pattern
1  4  9  16  25
1  4  9  16  25
1  4  9  16  25
1  4  9  16  25
1  4  9  16  25

*/

#include<iostream>
using namespace std;

int main()
{ int row,column,n ;

    for(row=1;row<=5;row++)
    {
        for(column=1;column<=5;column++)
        {
            cout<<column*column<<"  ";
        }
        
       cout<<endl; 
       
    }
 }
    