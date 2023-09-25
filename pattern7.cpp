/*
for printing the following pattern
a  b  c  d  e
a  b  c  d  e
a  b  c  d  e
a  b  c  d  e
a  b  c  d  e



#include<iostream>
using namespace std;

int main()
{ int row,column ;
   
    for(row=1;row<=5;row++)
    { 
       
        for(column=1;column<=5;column++)
        { 
            char name = 'a'+column-1;
            cout<<name <<" ";
        }
        
       cout<<endl; 
       
    }
 }
    
*/






    

#include<iostream>
using namespace std;

int main()
{ int row,column ;
   
    for(row=1;row<=5;row++)
    { 
       
        for( char column='a';column<='e';column++)
        { 
        
            cout<<column <<" ";
        }
        
       cout<<endl; 
       
    }
 }
    