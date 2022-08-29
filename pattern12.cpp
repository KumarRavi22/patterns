/*
        1 
        2 1
        3 2 1
        4 3 2 1
        5 4 3 2 1
        6 5 4 3 2 1 
*/

#include<iostream>
using namespace std;
int main()
{
    int n,d;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i)
        {
            d=i-j+1;
            cout<<d<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    }