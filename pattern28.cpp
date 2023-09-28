/*
print patter

*                    *
*  *              *  *
*  *  *        *  *  *       
*  *  *  *  *  *  *  *
*  *  *        *  *  *
*  *              *  * 
*                    *  

*/

#include<iostream>
using namespace std;
int main()
{
    int row , column,n;
     cout<<"Enter number :";
    cin>>n;

    for(row=1;row<=n-1;row++)
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
}