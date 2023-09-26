/*print the pattern
1 
2  1
3  2  1  
4  3  2  1 
5  4  3  2  1

*/

#include<iostream>
using namespace std;
int main()
{
    int row , column;
    for(row=1;row<=5;row++)
    {
        for(column=row;column>=1;column--)
        {
            cout<<column<<"  ";
        }
        cout<<endl;
    }
}