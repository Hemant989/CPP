
/*print pattern 
           1
         2 2
       3 3 3
     4 4 4 4
   5 5 5 5 5
         
                  

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
            cout<<"  ";

        for(column=1;column<=row;column++)           
        {  
             cout<<num<<" ";
        }
        cout<<endl;
       num=num+1; 
   }

}

*/


#include<iostream>
using namespace std;

int main()
{
     int row ,column,n;
     cout<<"enter number  : ";
     cin>>n;
    
   for(row=1;row<=n;row++)
   {  
        for(column=1;column<=n-row;column++)
            cout<<"  ";

        for(column=1;column<=row;column++)           
        {  
             cout<<row<<" ";
        }
        cout<<endl;
       
   }
}