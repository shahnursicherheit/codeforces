#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while ( t-- )
    {
        long long n ;
        cin >> n ;
        
        long long v = ( n - 3 ) / 2 ;
        long long  count = 0, k = 3 ;
        int j = 0 ;
        if ( n < 3 )
        {
            cout << n * n - 1 << endl ;
        }
        else
        {
        for ( int i = 1 ; i <= v ; i++ )
        {
            k += 2 ;
            count += ( k * 2 + ( k - 2 ) * 2) * ( i+ 1 ) ;
            j = i ;
        }

        if ( (n-3) % 2 != 0 )
        {
            k = n + 1 ;
            count += ((k * 2 + ( k - 2 ) * 2) / 2 - 1 )* (j+2) ;
        }
        cout << count+8 << endl ;
        }
    }
    return 0;
}