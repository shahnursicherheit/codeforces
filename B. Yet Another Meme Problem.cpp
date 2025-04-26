#define ll long long
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ll t ;
    cin >> t ;
    while (t--)
    {
        ll a, b, count = 0 ;
        cin >> a >> b ;
        string s = to_string(b) ;
        ll size = s.size() ;
        for ( int i = 0 ; i < size ; i++ )
        {
            if ( s[i] == '9' )
                count++ ;
        }
        if ( count == size )
        {
            cout << a*size << endl ;
        }
        else
        {
            cout << a* (size - 1 ) << endl ;
        }
    }
}
