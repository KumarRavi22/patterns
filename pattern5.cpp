/*
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout <<"enter no."<<endl;
    int i=1;
    while(i<=n)
    {
    int j=1;
    while(j<=n)
    {
        int d=n-j+1;
        cout<<d<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
        }
}