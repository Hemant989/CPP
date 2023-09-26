/*print pattern 
1  2  3  4  5
1  2  3  4
1  2  3 
1  2
1  



#include<iostream>
using namespace std;

int main()
{
    int row,column ;
    for(row=1;row<=5;row++)
    {
        for(column=1;column<=5-(row-1);column++)
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
    for(row=5;row>=1;row--)
    {
        for(column=1;column<=row;column++)
        {
            cout<<column<<"  ";
           
        }
        cout<<endl;
    }

}