/*
print pattern
              
         *  *  *  *  *
      *  *  *  *  *  *  *
   *  *  *  *  *  *  *  *  *
      *  *  *  *  *  *  *
         *  *  *  *  * 
            *  *  *  
               *
*/

#include<iostream>
using namespace std;

int main()
{  
    int row ,column, n;
    cout<<"enter number :";
    cin>>n;
    
   for(row=n-2;row<=n;row++)
   {  
        for(column=1;column<=n-row;column++)
            cout<<"  ";

        for(column=1;column<=2*row-1;column++)           
        {  
             cout<<"* ";
        }
        cout<<endl;
        
   }
   for(row=2;row<=n;row++)
   {  
        for(column=1;column<=row-1;column++)
            cout<<"  ";

        for(column=n*2-1;column>=2*row-1;column--)           
        {  
             cout<<"*"<<" ";
        }
    cout<<endl;

   }
   
}