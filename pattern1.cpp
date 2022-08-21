#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
int n;
cin>>n;
int i=1;
while(i<=n)     //row less than num
{
int j=1;
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout<<j;
    }
     cout<<endl;
    
}
}
return 0;
}