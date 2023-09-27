/*
print pattern
            A
         A  B
      A  B  C
   A  B  C  D
A  B  C  D  E
 
 


#include<iostream>
using namespace std;

int main()
{ int row,column,n;
cout<<"enter number";
cin>>n;
    for(row=1;row<=n;row++)
    {
        for(column=1;column<=n-row;column++) 
        {
            cout<<"  ";
            
        }
        for(char name='A';name<='A'+row-1;name++)
        {
            cout<<name<<" ";
            
        }
        cout<<endl;   
    }
}

*/

#include<iostream>
using namespace std;

int main()
{ int row,column,n;
cout<<"enter number";
cin>>n;
    for(row=1;row<=n;row++)
    {
        for(column=1;column<=n-row;column++) 
        {
            cout<<"  ";
            
        }
        for(column=1;column<=row;column++)
        {
            char name = 'A'+column-1;
            cout<<name<<" ";
        }
        cout<<endl;   
    }
}