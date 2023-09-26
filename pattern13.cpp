/*print pattern 
1  
2  2  
3  3  3 
4  4  4  4
5  5  5  5  5
*/

#include<iostream>
using namespace std;

int main()
{
    int row,column ;
    for(row=1;row<=5;row++)
    {
        for(column=1;column<=row;column++)
        {
            cout<<row<<"  ";
           
        }
        cout<<endl;
    }

}