#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int q ;
    cin >> q ;
    while ( q-- )
    {
        long long n, m, count = 0, subportion = 0 ;
        cin >> n >> m ;
        if ( n < ( m*10 ) )
        {
            for ( int i = 1 ; i <= n/m ; i++ ) 
            {
                count += ( i * m ) % 10 ;
            }
        }
        else
        {
        for ( int i = 1 ; i <= 10 ; i++ ) 
        {
            count += (i*m) % 10 ;
        }
        count = count * ( n / ( m*10 ) ) ;
        subportion = n % ( m*10 );
        
        for ( int i = 1 ; i <= (subportion/m) ; i++ )
        {
            count += (i*m) % 10 ; 
        }
        }
        cout << count << endl ;
        
    }

    return 0;
}