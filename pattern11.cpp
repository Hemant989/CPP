/*print pattern 

*  *  *  *  *
*  *  *  *
*  *  *
*  *  
*    



#include<iostream>
using namespace std;

int main()
{
    int row,column;
    for(row=1;row<=5;row++)
    {
        for(column=5;column>=row;column--)
        {
            cout<<'*'<<"  ";
        }
        cout<<endl;
    }

}

*/

#include<iostream>
using namespace std;

int main()
{
    int row,column;
    for(row=1;row<=5;row++)
    {
        for(column=1;column<=5-(row-1);column++)
        {
            cout<<'*'<<"  ";
        }
        cout<<endl;
    }

}