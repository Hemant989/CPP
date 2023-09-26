/*print the pattern
a 
b  b
c  c  c  
d  d  d  d 
e  e  e  e  e

*/

#include<iostream>
using namespace std;
int main()
{
    int row , column;
    char name='a';
    for( row=1;row<=5;row++)
    {
        for( column=1;column<=row;column++)
        {
            cout<<name<<"  ";
        }
        cout<<endl;
        name=name+1;
    }
}