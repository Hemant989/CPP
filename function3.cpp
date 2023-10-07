// convert any letter to it's capital form using function .

#include<iostream>
using namespace std;

char convert(char name)
{
    char ans = name-'a'+'A';
    return ans;
}

int main()
{
    char name;
    cout<<"enter any character :";
    cin>>name;
    
    cout<<convert(name);
}