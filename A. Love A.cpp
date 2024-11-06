#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    string s ;
    cin >> s ;
    int n = s.length() , count = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( s[i] == 'a' )
        {
            count++ ;
        }
    }

    if (count > ( n / 2 ) )
    {
        cout << n << endl ;
    }
    else
    {
        cout << count + count - 1<< endl ;
    }
}
