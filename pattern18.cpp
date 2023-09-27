
/*print pattern 
           *
         * *
       * * *
     * * * *
   * * * * *
         
                  */


#include<iostream>
using namespace std;

int main()
{ 
    int row ,column, n=5;
   for(row=1;row<=n;row++)
   {  
        for(column=1;column<=n-row;column++)
            cout<<"  ";

        for(column=1;column<=row;column++)           
        {  
             cout<<"* ";
        }
        cout<<endl;
        
   }

}