/*
print pattern
               1
            1  2  1
         1  2  3  2  1
      1  2  3  4  3  2  1
   1  2  3  4  5  4  3  2  1
*/

#include<iostream>
using namespace std;

int main()
{  
    int row ,column, n=5;
    cout<<"enter number :";
    cin>>n;
    
   for(row=1;row<=n;row++)
   {  
        for(column=1;column<=n-row;column++)
            cout<<"  ";

        for(column=1;column<=row;column++)           
        {  
             cout<<column<<" ";
        }
         for(column=row-1;column>=1;column--)           
        {  
             cout<<column<<" ";
        }
        cout<<endl;
        
   }
   
}