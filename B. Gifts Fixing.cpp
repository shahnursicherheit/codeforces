
#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while ( t-- )
    {

        int n ;
        cin >> n ;
        long a[n] , b[n] ;
        long min_a = LONG_MAX , min_b = LONG_MAX ;
        for ( int i = 0 ; i < n ; i++ )
        {
            cin >> a[i] ;
            if ( min_a > a[i])
            {
                min_a = a[i] ;
            }
        }

        for ( int i = 0 ; i < n ; i++ )
        {
            cin >> b[i] ;
            if ( min_b > b[i])
            {
                min_b = b[i] ;
            }
        }
        long long count = 0 ;
        for ( int i = 0 ; i < n ; i++ )
        {
            if ( ( a[i] > min_a && b[i] > min_b ))
            {
                long temp_a = a[i] - min_a ;
                long temp_b = b[i] - min_b ;
                count += max(temp_a,temp_b) ;
            }
            else if ( a[i] > min_a )
            {
                count += ( a[i] - min_a ) ;
            }
            else if ( b[i] > min_b )
            {

                count += ( b[i] - min_b ) ;
            }
        }

        cout << count << endl ;
    }

}
