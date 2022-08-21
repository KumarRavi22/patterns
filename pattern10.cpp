// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
int n;
cin>>n;
int i=1;
while(i<=n)
{
    int j=n;
    
    
    while(j>=i)
    {
        cout<<n-j+1;
        j--;
    }
    j=n;
    int spaces=1;
    while(spaces<=2*i-1)
    {
        cout<<'*';
        spaces++;
    }
    while(j>=i)
{
    cout<<j-i+1;
    j--;
    }
    cout<<endl;
    i=i+1;
}
}