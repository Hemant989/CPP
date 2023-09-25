/*
for printing the following pattern
1  8  27  64  125
1  8  27  64  125
1  8  27  64  125
1  8  27  64  125
1  8  27  64  125

*/

#include<iostream>
using namespace std;

int main()
{ int row,column,n ;

    for(row=1;row<=5;row++)
    {
        for(column=1;column<=5;column++)
        {
            cout<<column*column*column<<"  ";
        }
        
       cout<<endl; 
       
    }
 }
    