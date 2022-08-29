
/*
    A B C D E 
    F G H I J
    K L M N O
    P Q R S T
    U V W X Y
*/

#include <iostream>
using namespace std;
int main()
{
    int n;

    cin >> n;
    int i = 1;
    char s = 'A';
    while (i <= n)
    { 
        int j = 1;
        while (j <= n)
        {
            cout <<s<<" ";
            s = s + 1;
            j = j + 1;
        }
        cout << endl;
        i=i+1;
    }
}