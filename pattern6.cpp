/*

        1 2 3 
        4 5 6
        7 8 9     n=3

*/


#include<iostream>
using namespace std;
int main()
{
    int n;
    int count=0;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
        count=count+1;
        cout<<count<<" ";
        j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}
