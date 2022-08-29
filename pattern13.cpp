/*
    A A A A A 
    B B B B B
    C C C C C
    D D D D D
    E E E E E

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n)
        {
        char d=i-1+'A';
            cout<<d<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    }