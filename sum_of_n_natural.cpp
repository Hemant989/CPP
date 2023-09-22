//write a program for sum of n natural numbers

#include<iostream>
using namespace std;

int main()
{
int n ;
cout<<"Enter the number :";
cin>>n;

cout<<(n*(n+1))/2;

}


/////// OR////

#include<iostream>
using namespace std;

int main()
{
    int n, i ,sum=0;
    cout<<"Enter the number :";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum = sum+i;
    }
    cout<<sum;
} 