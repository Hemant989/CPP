/*
print pattern
            1
         1  2
      1  2  3
   1  2  3  4
1  2  3  4  5

        
*/

#include<iostream>
using namespace std;

int main()
{
     int row ,column,num=1,n;
     cout<<"enter number  : ";
     cin>>n;
    
   for(row=1;row<=n;row++)
   {  
        for(column=1;column<=n-row;column++)
           
           { 
            cout<<"  ";
        
           }

        for(column=1;column<=row;column++)           
        {  
             cout<<column<<" ";
            
        }
        cout<<endl;
        
   }
}

