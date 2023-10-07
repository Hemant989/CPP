#include<iostream>
using namespace std;

int Sum(int m, int n) //function declare
{
    int ans =m+n;  // function define
    return ans;
}

int main()
{
    int a,b;
    cout<<"enter 2 number";
    cin>>a>>b;

    //function call
     cout<<Sum(a,b);
     cout<<endl;
}