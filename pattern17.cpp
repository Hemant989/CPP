/*print pattern 
5  
5  4  
5  4  3 
5  4  3  2
5  4  3  2  1


#include<iostream>
using namespace std;

int main()
{
    int row,column ;
    for(row=5;row>=1;row--)
    {
        for(column=5;column>=row;column--)
        {
            cout<<column<<"  ";
           
        }
        cout<<endl;
    }

}
*/



#include<iostream>
using namespace std;

int main()
{
    int row,column ;
    for(row=1;row<=5;row++)
    {
        for(column=5;column>=5-(row-1);column--)
        {
            cout<<column<<"  ";
           
        }
        cout<<endl;
    }

}