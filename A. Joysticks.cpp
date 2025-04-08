#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int a,b ;
    cin >> a >> b ;
    int count = 0 ;
    if ( a == 1 && b == 1 )
    {
        cout << count << endl ;
        return 0 ; ;
    }
    while ( a > 0 && b > 0 )
    {
        count++ ;
        if ( a > b  )
        {
            b++ ;
            a = a - 2 ;
        }
        else
        {
            a++ ;
            b = b - 2 ;
        }
    }

    cout << count << endl ;
}
