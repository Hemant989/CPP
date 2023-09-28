/*
print pattern
          
*  *  *  *  *  *  *  *
*  *  *        *  *  *
*  *              *  * 
*                    *  
*  *              *  *
*  *  *        *  *  *
*  *  *  *  *  *  *  *

*/

#include<iostream>
using namespace std;
int main()
{
    int row , column,n=4;
    // cout<<"Enter number :";
    // cin>>n;

    for(row=n;row>=1;row--)
      {  
             for(column=1;column<=row;column++)
             cout<<"*  ";

             for(column=1;column<=2*n-2*row;column++)           
             {  
                cout<<"   ";
             }
             for(column=1;column<=row;column++)
              cout<<"*  ";

            cout<<endl;

       }
    for(row=1;row<=4;row++)
      {  
             for(column=1;column<=row;column++)
             cout<<"*  ";

             for(column=1;column<=2*n-2*row;column++)           
             {  
                cout<<"   ";
             }
             for(column=1;column<=row;column++)
              cout<<"*  ";

            cout<<endl;

       }
}