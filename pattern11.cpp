            /*

                    1 
                    2 3
                    3 4 5             method 2 without 
                    4 5 6 7

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
            d=i+j-1;
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    }