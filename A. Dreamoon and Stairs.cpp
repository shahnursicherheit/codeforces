#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int n, m ;
    cin >> n >> m ;
    // n % 2 n / 2
    int n_divi = n / 2 ;
    if ( n % 2 == 0 )
    {
        if ( n_divi % m == 0 )
        {
            cout << n_divi << endl ;
        }
        else if ( (n_divi%m*2) % m == 0 )
        {
            cout << n_divi - ( n_divi%m ) + ( n_divi%m )*2 << endl ;
        }
        else
        {
            cout << -1 << endl ;
        }
    }
    else if ( (n % 2 * 2 ) % m == 0  )
    {
        cout << n_divi - (n % 2 )<< ( n % 2 * 2 ) << endl ;
    }
    else
    {
        n_divi++ ;
        int c = (n_divi/m+1)*m ;
        int d = c - n_divi ;
        int l = d + d / 2 + ( n_divi - ( d /2) );
        if ( l == c )
        cout << c << endl ;
        else
        cout << -1 << endl ;
    }

    return 0;
}
