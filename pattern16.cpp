/*
    A B C D 
    B C D E 
    C D E F 
    D E F G
*/
#include <iostream>
using namespace std;
int main()
{
    int n;

    cin >> n;
    int i = 1;
    while (i <= n)
    { 
        int j = 1;
        while (j <= n)
        {
        char s = 'A'+i+j-2;;

            cout <<s<<" ";
            s = s + 1;
            j = j + 1;
        }
        cout << endl;
        i=i+1;
    }
}