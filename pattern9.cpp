#include<iostream>
using namespace std;

int main()
{
int row ,column, count=1;
for(row=1;row<=5;row++)
{
    for(column=1;column<=5;column++)
    {
        cout<< count<<"  ";
        count=count+1;
    }
    cout<<endl;
}


}